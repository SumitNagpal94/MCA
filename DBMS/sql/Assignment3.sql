1
select c.cname ,(select sname from salesman s where c.snum=s.snum)"Salesman" from customers c;

2
select name,city from ( select cname as Name,city from customers group by city,cname UNION select sname as Name,city from salesman group by city,sname) order by city,name;
select c.cname,s.sname,c.city from customers c,salesman s where c.city=s.city;

3
select o.*,(select sname from salesman s where o.snum=s.snum)"Salesman",(select cname from customers c where o.cnum=c.cnum) "Customers" from orders o;

4
select * from (select o.*,(select city from salesman s where o.snum=s.snum) as S_city,(select city from customers c where o.cnum=c.cnum) as C_city from orders o) where NOT(S_city=C_city);
select onum,amount,odate,cnum,snum from (select o.*,(select city from salesman s where o.snum=s.snum) as S_city,(select city from customers c where o.cnum=c.cnum) as C_city from orders o) where NOT(S_city=C_city);

5
 Select cname from customers where snum IN(Select snum from salesman where commission>12);

6
//select amount,comm,comm*amount/100 as Rating from (select amount,(select commission from salesman s where o.snum=s.snum) as comm from orders o) where comm*amount/100>100;

select amount,comm,comm*amount/100 "Comm Amount",rate from (select amount,(select commission from salesman s where o.snum=s.snum) as comm,(Select rating from customers c where o.cnum=c.cnum) as rate from orders o) where rate>100;

7

//select c1name+c2name,c2name+c1name from (select c1.cname as c1name,c2.cname as c2name from customers c1,customers c2 where c1.rating=c2.rating and NOT(c1.cname=c2.cname));

select c1.cname as c1name,c2.cname as c2name from customers c1,customers c2 where c1.rating=c2.rating and c1.cnum!=c2.cnum and c1.cnum<c2.cnum order by c1.cnum;



8
Select cname from customers where city IN(Select city from customers where snum=(select snum from salesman where sname='Sejal'));

9
//select cname,snum from (select snum,count(distinct(snum))) as num,cname from customers group by cname)where num=1;

Select c1.cname,c2.cname,c1.snum from customers c1,customers c2 where c1.snum=c2.snum and c1.cname!=c2.cname and c1.cnum<c2.cnum order by c1.snum,c1.cname,c2.cname;

10
select * from customers;
select * from salesman;
select sname from salesman where city IN(select city from (select count(*) as cn,city from salesman group by city) where cn>1);


11
//select o1.onum,o2.onum,(select cname from customers c where o1.cnum=c.cnum)"CNAME" from orders o1,orders o2 where o1.onum<o2.onum and o1.cnum=o2.cnum union select o1.onum,o2.onum,(select cname from customers c where o1.cnum=c.cnum)"CNAME" from orders o1,orders o2 where o1.onum=o2.onum and o1.cnum=o2.cnum group by 01.onum,o2.onum having count(*)>1
< single order not, = duplicacy onum


select o1.onum,o2.onum,(select cname from customers c where o1.cnum=c.cnum)"CNAME" from orders o1,orders o2 where o1.onum<=o2.onum and o1.cnum=o2.cnum order by o1.cnum,o1.onum,o2.onum;


select o1.onum as 1onum,o2.onum,o1.cnum from (Select o1.onum,o2.onum,o1.cnum from orders o1,orders o2 where o1.cnum=o2.cnum and o1.onum<=o2.onum order by o1.onum,o2.onum,o1.cnum) from orders group by cnum having count(1onum)=1


trial
Select o1.onum,o2.onum,(select cname from customers c where c.cnum=o1.cnum) as custname from orders o1,orders o2 where o1.cnum=o2.cnum and o1.onum<o2.onum order by custname,o1.onum,o2.onum UNION Select o1.onum,o2.onum,(select cname from customers c where c.cnum=o1.cnum) as custname from orders o1,orders o2 where o1.cnum=o2.cnum and o1.onum=o2.onum group by custname having count(*)=1 order by custname,o1.onum,o2.onum ;





Select o1.onum,o2.onum,(select cname from customers c where c.cnum=o1.cnum) as custname from orders o1,orders o2 where o1.cnum=o2.cnum and o1.onum<o2.onum order by custname,o1.onum,o2.onum UNION (Select o1.onum,o2.onum,(select cname from customers c where c.cnum=o1.cnum) as custname from orders o1,orders o2 where o1.cnum=o2.cnum and o1.onum<=o2.onum order by custname,o1.onum,o2.onum) MINUS (Select o1.onum,o2.onum,(select cname from customers c where c.cnum=o1.cnum) as custname from orders o1,orders o2 where o1.cnum=o2.cnum and o1.onum=o2.onum order by custname,o1.onum,o2.onum);