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
select cname,snum from (select sname,city )