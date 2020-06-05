import java.util.*;

class Graph
{ 
        int adj[][],v;
        
       void display()
       {
       System.out.println("Adjacent Matrix is\n");
         for(int i=0;i<v;i++)
         {
          for(int j=0;j<v;j++)
         System.out.print(adj[i][j]+"\t");
          System.out.println("");
          }
      }
       void IsConnected()
       {
       int a=1;
       DirectedGraph g1=new DirectedGraph(this.adj,this.v);
   
for(int k=0;k<v;k++)
  for(int i=0;i<v;i++)
     for(int j=0;j<v;j++)
      if(g1.adj[i][k]==1 && g1.adj[k][j]==1)
        g1.adj[i][j]=1;
        
for(int i=0;i<v;i++)
{
   for(int j=0;j<v;j++)
   {
      if(g1.adj[i][j]==1)
      continue;
      else
      {
      a=0;
      break;
      }
     }

    if(a==0)
    break;

}
      if(a==1)
      System.out.println("\nGraph is Connected");
      else
      System.out.println("\nGraph is not Connected");
       }
       
}


class DirectedGraph extends Graph
{

  DirectedGraph()
   {
    System.out.println("\nEnter number of vertices");
    Scanner sc=new Scanner(System.in);
    v=sc.nextInt();
    adj=new int[v][v];

  for(int i=0;i<v;i++)
   for(int j=0;j<v;j++)
      this.adj[i][j]=1;
    }

  void outdegree(int a)
  {   
     int  out=0;
      for(int i=0;i<v;i++)
        out+=adj[a-1][0];
System.out.println("OutDegree of Entered Vertex is "+out);

  }

  void indegree(int a)
  {
     int  in=0;
      for(int i=0;i<v;i++)
        in+=adj[i][a-1];
System.out.println("\nInDegree of Entered Vertex is "+in);
  }

}

class WeightedGraph extends Graph
{
  	
	WeightedGraph(int v)
	{
	 for(int i=0;i<v;i++)
   	   for(int j=0;j<v;j++)
      	     this.adj[i][j]=100;
	}	
	private int min(int a,int b)
	{
	if(a<b)
	return a;
	else
	return b;
	}  
 
              void ShortestPath()
              {
	   
  	for(int k=0;k<v;k++)
       	for(int i=0;i<v;i++)
         	  for(int j=0;j<v;j++)
           	   adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
	
	display();
              }
}


class TestGraph1
{
      public static void main(String args[])
      { 
      Scanner sc=new Scanner(System.in);  

     DirectedGraph d=new DirectedGraph();
     d.display();
     d.IsConnected();
     System.out.print("\nEnter the Vertex whose Outdegree and InDegree needed to be found :  v");
     int v=sc.nextInt();
     d.indegree(v);
     d.outdegree(v);
     System.out.print("\nEnter the Number of Vertex in Weighted Graph : ");
     v=sc.nextInt();
    WeightedGraph w=new WeightedGraph(v);     
     w.ShortestPath(); 
}
}