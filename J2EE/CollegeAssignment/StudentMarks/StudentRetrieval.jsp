<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Student Result</title>
    <!-- Bootstrap core CSS -->
    <link href="css/bootstrap.min.css" rel="stylesheet">
    <link href="css/style.css" rel="stylesheet">
	
	<script>
    </script>
	 </head>
  <body>

    <nav class="navbar navbar-default">
      <div class="container">
        <div class="navbar-header">
          <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar" aria-expanded="false" aria-controls="navbar">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
        </div>
       <div id="navbar" class="collapse navbar-collapse">
          <ul class="nav navbar-nav">
            <li><a href="index.html">Result</a></li>
          </ul>
          <ul class="nav navbar-nav navbar-right">
            <li><a href="#">Welcome, User</a></li>
            <li><a href="admin.html">Admin Login</a></li>
          </ul>
        </div><!--/.nav-collapse -->
      </div>

    </nav>

	
	<header id="header">
      <div class="container">
        <div class="row">
          <div class="col-md-12">
            <h1 class="text-center">Student Result </h1>
          </div>
        </div>
      </div>
    </header>
	
	<section id="main">
      <div class="container">
        <div class="row">
          <div class="col-md-4 col-md-offset-4">
            <form id="" class="well" action="index.html" method="post" >
                  
                    <%@ page import="java.sql.*" %>

                    <%                  
                    String url="jdbc:mysql://www.db4free.net:3306/spmdata";
                    String username="sumit_nagpal";
                    String password="Sumit@123";
                    int sid=Integer.parseInt(request.getParameter("sid"));
                    String sname="",eno="";
                    int id=0,marks1=0,marks2=0,marks3=0,marks4=0,marks5=0,total=0;
                    double per=0.00;
                    try
                    {
                      Class.forName("com.mysql.cj.jdbc.Driver");
                      Connection con= DriverManager.getConnection(url,username,password);
                      Statement st=con.createStatement();
                      ResultSet rs=st.executeQuery("select * from student where sid="+sid);
                      if(rs.next())
                      {
                      sname=rs.getString("sname");
                      eno=rs.getString("eno");
                      sid=rs.getInt("sid");
                      marks1=rs.getInt("marks1");
                      marks2=rs.getInt("marks2");
                      marks3=rs.getInt("marks3");
                      marks4=rs.getInt("marks4");
                      marks5=rs.getInt("marks5");
                      total=marks1+marks2+marks3+marks4+marks5;
                      per=total/5;
                      }
                      else
                      {
                        %>
                        <html>
                        <body>
                          <script>
                          alert("Invalid Student ID, Try again");
                          </script>
                        </body></html>
                        <%
                        response.sendRedirect("index.html");
                      }
                    }
                    catch(Exception e)
                    {
                      e.printStackTrace();
                      e.getMessage();
                    }

                    %>
                  <div class="form-group">
                    <label>Student Name</label>
                    <label><% out.print(sname); %></label>
                  </div>
                  <div class="form-group">
                    <label>Student ID</label>
                    <label><% out.print(sid); %></label>
                  <div class="form-group">
                    <label>Enrollment Number</label>
                    <label><% out.print(eno); %></label>
                  </div>
                  <div class="form-group">
                    <label>Subject 1 Marks</label>
                    <label><% out.print(marks1); %></label>
                  </div>
                  <div class="form-group">
                    <label>Subject 2 Marks</label>
                    <label><% out.print(marks2); %></label>
                  </div>
                  <div class="form-group">
                    <label>Subject 3 Marks</label>
                    <label><% out.print(marks3); %></label>
                  </div>
                  <div class="form-group">
                    <label>Subject 4 Marks</label>
                    <label><% out.print(marks4); %></label>
                  </div>
                  <div class="form-group">
                    <label>Subject 5 Marks</label>
                    <label><% out.print(marks5); %></label>
                  </div>
                  <div class="form-group">
                    <label>Total</label>
                    <label><% out.print(total); %></label>
                  </div>
                  <div class="form-group">
                    <label>Percentage</label>
                    <label><% out.print(per); %></label>
                  </div>
                  <button type="submit" class="btn btn-success btn-xs">Return</button>
              </form>
          </div>
        </div>
      </div>
    </section>
	
	<footer id="footer">
      <p>Copyright JMI, &copy; 2020</p>
    </footer>

    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js"></script>
    <script src="js/bootstrap.min.js"></script>
  </body>
</html>
