import java.util.*;

class Graph
{ 
int adj[][],v;

Graph()
{}

Graph(int v)
{
this.v=v;
  adj=new int[v][v];
  for(int i=0;i<v;i++)
     for(int j=0;j<v;j++)
      adj[i][j]=0;
      adj=new int[v][v];
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

DirectedGraph(int v)
{
  super(v);

    Scanner sc=new Scanner(System.in);
    System.out.println("\nSelect the Option:\n1: Enter data\n2: Random data Entered automatically");  
    int x=sc.nextInt();

    switch(x)
      {
       case 1:
       System.out.println("Enter Matrix Data");
       for(int i=0;i<v;i++)
           for(int j=0;j<v;j++)
                 this.adj[i][j]=sc.nextInt();//rand.nextInt(10)+1;    
        break;
      case 2:
      Random rand=new Random(10);
      for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
          this.adj[i][j]=rand.nextInt(Integer.MAX_VALUE)%2;

      break;
      default:
        System.out.println("Invalid Selection");
      }
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
    super(v);
    this.v=v;
    adj=new int[v][v];
    Scanner sc=new Scanner(System.in);
    System.out.println("\nSelect the Option:\n1: Enter data\n2: Random data Entered automatically");  
    int x=sc.nextInt();

    switch(x)
      {
       case 1:
       System.out.println("Enter Matrix Data\nNote: Enter 1000 if path between two vertex doesnot exist");
       for(int i=0;i<v;i++)
           for(int j=0;j<v;j++)
                 this.adj[i][j]=sc.nextInt();//rand.nextInt(10)+1;
        
        break;
      case 2:
      Random rand=new Random(10);
      for(int i=0;i<v;i++)
           for(int j=0;j<v;j++)
                 this.adj[i][j]=rand.nextInt(10)+1;
      break;
      default:
        System.out.println("Invalid Selection");
      }

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
  
  Scanner sc=new Scanner(System.in);
  System.out.println("\nEnter the nodes between which ShortestPath needed to be find out");
  System.out.print("Enter the node 1: v");
  int a=sc.nextInt();
  System.out.print("Enter the node 2: v");
  int b=sc.nextInt();
  System.out.println("\nShortest path between v"+a+" and v"+b+" is "+adj[a-1][b-1]);

  System.out.print("\nShortest Path ");    
  display();

              }
}


class TestGraph
{
      public static void main(String args[])
      { 
      Scanner sc=new Scanner(System.in);  
    
     System.out.print("\nEnter the Number of Vertex in Directed Graph : ");
     int v=sc.nextInt();
     DirectedGraph d=new DirectedGraph(v);
     d.display();
     d.IsConnected();
     System.out.print("\nEnter the Vertex whose Outdegree and InDegree needed to be found :  v");
     v=sc.nextInt();
     d.indegree(v);
     d.outdegree(v);
     System.out.print("\nEnter the Number of Vertex in Weighted Graph : ");
     v=sc.nextInt();
    WeightedGraph w=new WeightedGraph(v);  
    System.out.print("\nWeighted Graph ");
     w.display();   
     w.ShortestPath(); 
}
}