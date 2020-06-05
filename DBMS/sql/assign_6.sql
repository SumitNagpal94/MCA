--q1

create table customerz (name varchar2(10), age number(3), address varchar2(20),salary number(6));

Insert into customerz values ('Ramesh',23,'Allahbad',20000);
Insert into customerz values('Suresh',22,'Kanpur',22000);
Insert into customerz values('Mahesh',24,'Gaziabad',24000);
Insert into customerz values('Chandan',25,'Noida',26000);
Insert into customerz values('Alex',21,'Gurgaon',28000);
Insert into customerz values('Sunita',20,'Delhi',30000);


declare
	cname customerz.name%TYPE;
	caddress customerz.address%TYPE;
CURSOR Name_Address IS
	select name,address from customerz;
begin
	open Name_Address;
	dbms_output.put_line('cname'||chr(9)||'caddress');
	dbms_output.put_line('-----------------');
	loop
		fetch Name_Address into cname,caddress;
		dbms_output.put_line(cname||chr(9)||caddress);
		exit when Name_Address%NOTFOUND;
	end loop;
	close Name_Address;
end;

--q2
create or replace trigger Ins_Upd_Del 
	Before insert or update or delete of salary on customerz
	For each row
	declare
		salary_diff number;
	begin
		if updating then
			salary_diff:=:new.salary-:old.salary;
			dbms_output.put_line('Old Salary is '||:old.salary);
			dbms_output.put_line('New Salary is '||:new.salary);
			dbms_output.put_line('Salary Difference is '||salary_diff);
		
		elsif inserting then
			dbms_output.put_line('New Salary is '||:new.salary);
		else
			dbms_output.put_line('Old Salary is '||:old.salary);	
		end if;
	end;

Insert into customerz values('Sumit',30,'Delhi',35000);
update customerz set salary=40000 where name='Sumit';
delete from customerz where salary=40000;

--q3


create or replace function summ(a number, b number) return number is
	begin
		return(a+b);
	end;

select summ(98996,86825)"SUM" from dual;