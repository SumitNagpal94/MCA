<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Update Student Details</title>
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
            <li><a href="#">Update Student Details</a></li>
            <li><a href="index.html">Result</a></li>
          </ul>
          <ul class="nav navbar-nav navbar-right">
            <li><a href="#">Welcome, Admin</a></li>
            <li><a href="admin.html">Logout</a></li>
          </ul>
        </div><!--/.nav-collapse -->
      </div>

    </nav>

	
	<header id="header">
      <div class="container">
        <div class="row">
          <div class="col-md-12">
            <h1 class="text-center">Update Student Details </h1>
          </div>
        </div>
      </div>
    </header>
	
	<section id="main">
      <div class="container">
        <div class="row">
          <div class="col-md-4 col-md-offset-4">
            <form id="" class="well" action="UpdateDatabase.jsp" method="post" >
                  
                    <%@ page import="java.sql.*" %>
                    <%                  
                    String sql="insert into student values (?,?,?,?,?,?,?,?);";
                    String url="jdbc:mysql://www.db4free.net:3306/spmdata";
                    String username="sumit_nagpal";
                    String password="Sumit@123";
                    String sid=request.getParameter("sid");
                    String sname="",eno="";
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
                      sid=rs.getString("sid");
                      }
                      else
                      {
                        %>
                        <html><body><script>alert("Invalid Student ID");</script></body></html>
                        <%
                        out.print("No such student ID");
                        response.sendRedirect("UpdateEntry.html");
                      }
                    }
                    catch(Exception e)
                    {
                      e.printStackTrace();
                    }

                    %>
                  <div class="form-group">
                    <label>Student Name</label>
                    <label><% out.print(sname); %></label>
                    <input type="hidden"  name="sname" value="<% out.print(sname); %>" >
                  </div>
                  <div class="form-group">
                    <label>Student ID</label>
                    <label><% out.print(sid); %></label>
                    <input type="hidden"  name="sid" value="<% out.print(sid); %>" >
                  <div class="form-group">
                    <label>Enrollment Number</label>
                    <label><% out.print(eno); %></label>
                    <input type="hidden"  name="eno" value="<% out.print(eno); %>" >
                  </div>
                  <div class="form-group">
                    <label>Subject 1 Marks</label>
                    <input type="number" class="form-control" placeholder="Enter Marks for Subject 1 " id="marks1" name="marks1" required>
                  </div>
                  <div class="form-group">
                    <label>Subject 2 Marks</label>
                    <input type="number" class="form-control" placeholder="Enter Marks for Subject 2 " id="marks2" name="marks2" required>
                  </div>
                  <div class="form-group">
                    <label>Subject 3 Marks</label>
                    <input type="number" class="form-control" placeholder="Enter Marks for Subject 3" id="marks3" name="marks3" required>
                  </div>
                  <div class="form-group">
                    <label>Subject 4 Marks</label>
                    <input type="number" class="form-control" placeholder="Enter Marks for Subject 4" id="marks4" name="marks4" required>
                  </div>
                  <div class="form-group">
                    <label>Subject 5 Marks</label>
                    <input type="number" class="form-control" placeholder="Enter Marks for Subject 4" id="marks5" name="marks5" required>
                  </div>
                  <button type="submit" class="btn btn-success btn-xs">Submit</button>
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
