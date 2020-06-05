Q1

create table customer(
cname varchar2(10),
cnum number(4) primary key
);

insert into customer values('Sumit',1000);
insert into customer values('Vaishali',1001);
insert into customer values('Pankaj',1002);
insert into customer values('Ifra',1003);
insert into customer values('Mariam',1004);

create table product(
pname varchar2(10),
pid number(4) primary key

);

insert into product values('Knife',2000);
insert into product values('Jar',2001);
insert into product values('Pan',2002);
insert into product values('Bed',2003);
insert into product values('Bedsheet',2004);
insert into product values('Pillow',2005);
insert into product values('Chair',2006);

create table supplier(
pid number(4),
snum number(4) primary key,
sname varchar2(10),
Foreign key(pid) references product(pid)
);

insert into supplier values(2000,3000,'Vinay');
insert into supplier values(2001,3004,'Ankit');
insert into supplier values(2004,3002,'Umesh');	
insert into supplier values(2005,3003,'Sahil');	
insert into supplier values(2003,3001,'Rishabh');	
insert into supplier values(2002,3005,'Modi');	


create table orderr(
amount number(7,2),
odate date,
cnum number(4),
onum number(4) primary key,
pid number(4),
snum number(4),
qty number(2),
dplace varchar2(10),
Foreign key(pid) references product(pid),
Foreign key(snum) references supplier(snum),
Foreign key(cnum) references customer(cnum)
);

insert into orderr values(16434,'13-MAR-18',1000,4000,2005,3003,3,'Delhi');
insert into orderr values(14512,'3-Jun-18',1001,4005,2004,3001,1,'Jaipur');
insert into orderr values(19876,'29-Aug-18',1002,4004,2003,3005,5,'Ladakh');
insert into orderr values(12028,'13-Mar-18',1003,4001,2002,3004,2,'Goa');
insert into orderr values(11090,'12-Oct-17',1004,4002,2001,3002,6,'Shimla');
insert into orderr values(14090,'6-Nov-19',1005,4006,2003,3002,2,'Manali');
insert into orderr values(19590,'25-Feb-18',1003,4007,2005,3001,1,'Lucknow');
insert into orderr values(45190,'7-Mar-19',1001,4008,2000,3002,7,'Hyderabad');
insert into orderr values(35630,'11-Sep-17',1002,4003,2001,3004,2,'Banglore');
insert into orderr values(45630,'11-Sep-17',1002,4009,2000,3002,1,'Banglore');
insert into orderr values(45630,'11-Sep-17',1002,4009,2000,3002,1,'Banglore');

create table payment(
pmode varchar2(10),
onum number(4),
Foreign key(onum) references orderr(onum)
);

insert into payment values('Cash',4000);
insert into payment values('Cheque',4003);
insert into payment values('DD',4002);
insert into payment values('Cash',4004);
insert into payment values('Online',4003);
insert into payment values('DD',4001);
insert into payment values('Cheque',4005);
insert into payment values('DD',4008);
insert into payment values('Online',4007);
insert into payment values('Online',4006);

create table category(
pid number(4),
article varchar2(10),
Foreign key(pid) references product(pid)
);

insert into category values(2000,'Kitchen');
insert into category values(2001,'Kitchen');
insert into category values(2002,'Kitchen');
insert into category values(2003,'Room');
insert into category values(2004,'Room');
insert into category values(2005,'Room');

Q2: Write a PL/SQL code to check whether a number is prime or not.

set serveroutput on;
declare
	i number(10);
	a number(1);
	num number(10);
begin
	num:=&num;
	a:=0;
	i:=2;
	while i<num/2
	loop
		if (mod(num,i)=0) then
			a:=1;
			exit;
		end if;
		i:=i+1;
	end loop;
	if (a=0) then
		dbms_output.put_line('Entered Number is Prime');
	else
		dbms_output.put_line('Entered Number is Not Prime');
	end if;
end;
/

Q3: Write a PL/SQL code to check whether a number is palindrome or not.

set serveroutput on;


declare
	num number(10);
	num1 number(10);
	TYPE array IS VARRAY(10) OF NUMBER(10);
	total number(2);
	i number(2);
begin
	num:=&num;
	num1:=num;
	total:=1;
	i:=1;
	while(num1!=0) loop
	array(total):=mod(num1,10);
	total:=total+1;
	num:=num/10;
	end loop;
	while array(i)=array(total)  
	loop
	i:=i+1;
	total:=total-1;
	end loop;
	if (i=total) then
		dbms_output.put_line('Entered Number is Palindrome');
	else
		dbms_output.put_line('Entered Number is Not Palindrome');
	end if;
end;
/



declare
	num number(10);
	num1 number(10);
	rev number(10);
begin
	rev:=0;
	num:=&num;
	num1:=num;
	while num1!=0 loop
		rev:=rev*10+mod(num1,10);
		num1:=num1/10;
	end loop;
	if (num=rev) then
		dbms_output.put_line('Entered Number is Palindrome');
	else
		dbms_output.put_line('Entered Number is Not Palindrome');
	end if; 
end;
/


Q4: Write a PL/SQL code to compute factorial of a given number.

declare
	num number(2):=&num;
	fact number(10);
	i number(2);
begin
	i:=num;
	fact:=1;
	loop
	fact:=fact*i;
	i:=i-1;
	exit when i=1; 
	end loop;
	dbms_output.put_line('Factorial of '||num||' is '||fact);
end;

Q5: Write a PL/SQL code to print Fibonacci series.

declare
	num number(2):=&num;
	a number(3):=0;
	b number(3):=1;
	c number(3);
	i number(2):=0;
begin
	dbms_output.put_line('Fibbo Series of '||num||' terms is ');
	dbms_output.put_line(a);
	dbms_output.put_line(b);
	loop
	c:=a+b;
	dbms_output.put_line(c);
	a:=b;
	b:=c;
	i:=i+1;
	exit when i=num-2; 
	end loop;
end;


Q6: Write a PL/SQL code to display sum of first ten natural numbers.
declare
	i number(3):=10;
	summ number(3):=0;
begin
	loop
	summ:=summ+i;
	i:=i-1;
	exit when i=0; 
	end loop;
	dbms_output.put_line('Sum of First 10 Natural Numbers is '||summ);
end;


Q7: Write a PL/SQL code to compute area and perimeter of a circle.

declare
r number(3):=&r;
per number(6,2);
ar number(6,2);
begin
per:=2*3.14*r;
ar:=3.14*r*r;
dbms_output.put_line('Perimeter of Circle is '||per);
dbms_output.put_line('Area of Circle is '||ar);
end;
/

Q8: Write a PL/SQL code to find the greatest among three numbers.

declare
	x number(3);
	y number(3);
	z number(3);
begin
	x:=&x;
	y:=&y;
	z:=&z;
	if x>y and x>z then
		dbms_output.put_line('X '||x||' is Largest');
	elsif y>x and y>z then
		dbms_output.put_line('Y '||y||' is Largest');
	else
		dbms_output.put_line('Z '||z||' is Largest');
	end if;
end;
/

Q9: Write a PL/SQL code to display whether a number is even or odd.
declare
	num number(3):=&num;
begin
	if mod(num,2)=0 then
		dbms_output.put_line('Number '||num||' is Even');
	else
		dbms_output.put_line('Number '||num||' is Odd');
	end if;
end;
/

Q10: Write a PL-SQL script to compare three given numbers and display them in ascending orderr.

declare
a number(3):=&a;
b number(3):=&b;
c number(3):=&c;
temp number(3);
begin
	if a>b and a>c then
		temp:=c;
		c:=a;
		if temp<b then
			a:=temp;
		else
			a:=b;
			b:=temp;
		end if;
	elsif b>a and b>c then
		temp:=c;
		c:=b;
		if temp<a then
			b:=a;
			a:=temp;	
		else
			b:=temp;	
		end if;
	else
		if a>b then
		temp:=a;
		a:=b;
		b:=temp;
		end if;
	end if;
	dbms_output.put_line(a||' < '||b||' < '||c);
end;