import java.util.*;

class Graph
{ 
int adj[][],v;

Graph()
{
System.out.println("Enter number of vertices");
Scanner sc=new Scanner(System.in);
v=sc.nextInt();
adj=new int[v][v];

for(int i=0;i<v;i++)
   for(int j=0;j<v;j++)
      this.adj[i][j]=0;
      
}
         
       Graph(int a[][],int v)
       {
       adj=new int[v][v];
for(int i=0;i<v;i++)
   for(int j=0;j<v;j++)
      this.adj[i][j]=a[i][j];
       }
        
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
       Graph g1=new Graph(this.adj,this.v);
   
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
System.out.println("OutDegree of Entered Vertex is "+in);
  }

}

class WeightedGraph
{
}


class Test
{
public static void main(String args[])
{ 
Scanner sc=new Scanner(System.in);  

   DirectedGraph d=new DirectedGraph();
     d.display();
     d.IsConnected();
     System.out.println("Enter the Vertex whose Outdegree and InDegree needed to be found :  v");
     int v=sc.nextInt();
     d.indegree(v);
     d.outdegree(v);
}
}