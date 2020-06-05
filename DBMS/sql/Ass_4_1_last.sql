Select sname from (Select snum,(Select (select sname from supplier s where s.snum=o.snum) as sname,pid,(select article from category c where c.pid=o.pid) as article from orderr o) from orderr) group by article having sum(*)>2;  





Select sname from (Select snum,(select sname from supplier s where s.snum=o.snum) as sname,pid,(select article from category c where c.pid=o.pid) as article from orderr o)  group by sname having count(distinct(article))>2;

Select article from (Select snum,(select sname from supplier s where s.snum=o.snum) as sname,pid,(select article from category c where c.pid=o.pid) as article from orderr o)  group by article,sname having count(sname)>2;







Q11: Create a table ‘Emp’ with attributes ‘ename’,’ecity’,’salary’,’enumber’,’eaddress’,’depttname’.
Create another table ‘Company’ with attributes ‘cname’,  ccity’,’empnumber’ in the database ‘Employee’

create table Emp(
ename varchar2(10),
ecity varchar2(10),
salary number(7,2),
enumber number(4) primary key,
eaddress varchar2(20),
deptname varchar2(10)
);

insert into emp values('Sumit','Delhi',8500,1001,'WestDelhi','Tester');
insert into emp values('Suhel','Gurugram',9500,1002,'Sec21','HR');
insert into emp values('Himanshu','Delhi',9800,1003,'SouthDel','Technical');
insert into emp values('John','Jaipur',9969,1004,'HouseNo7','IT');

create table company(
cname varchar2(10),
ccity varchar2(10),
empnumber number(4),
foreign key(empnumber) references Emp(enumber)
);

insert into company values('Comviva','Gurugram',1001);
insert into company values('Accenture','Banglore',1002);
insert into company values('Infosys','Mysore',1003);
insert into company values('Naggaro','Gurugram',1004);


Execute the following queries on above tables:-
•	Create a view having ename and ecity.
	create view viewnew as select ename,ecity from emp;

•	In the above view change the ecity to ‘Delhi’ where ename is ‘John’.
	update viewnew set ecity='Delhi' where ename='John';

•	Create a view having attributes from both the tables.
	create view viewnew1 as select e.*,c.* from emp e,company c where e.enumber=c.empnumber;

•	Update the above view and increase the salary of all employees of IT department by Rs.1000.
	update viewnew1 set salary =salary+1000 where deptname='IT'; 
	ERROR at line 1:
ORA-01779: cannot modify a column which maps to a non key-preserved table
		select * from viewnew1;

Now solve the following queries using PL/SQL:-
•	Calculate the average salary from table ‘Emp’ and print increase the salary if the average salary is less than 10,000.
	declare
		average number(7,2);
	begin
		select avg(salary) into average from emp;
		if average<10000 then
			dbms_output.put_line('Increase the Salary');
		end if;
	end;
•	Print the deptno from the employee table using the case statement if the deptname is ‘Technical’ then deptno is 1, if the deptname is ‘HR’ then the deptno is 2 else deptno is 3.
	select deptname,case deptname when 'Technical' then 1 when 'HR' then 2 else 3 end as deptno from emp; 
