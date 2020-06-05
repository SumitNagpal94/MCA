import java.util.*;

public class Triplet<A,B,C> implements Collection {

    static ArrayList<String> arr=new ArrayList<String>();
    //A a,B b,C c;
    
    public boolean add(Object a,Object b,Object c)
    {
        String s=a.toString()+" "+b.toString()+" "+c.toString();
        if(arr.add(s))
            return true;  
        else
            return false;  
    }

    public boolean add(Object a)
    { 
        return false;
    } 
    public boolean addAll(Collection trip)
    {

        //if(arr.java.util.Collection.ArrayList.addAll());
            return true;
        //else
          //  return false;
    }
    
    public void clear() {

    }
    
    public boolean contains(Object o) {
        return false;
    }
    
    public boolean containsAll(Collection o1) {
        return false;
    }

    public boolean equals(A a,B b,C c) {
        return false;
    }
    
    public int hashCode() {
        return 0;
    }
    
    public boolean isEmpty() {
        return false;
    }
    
    public Iterator<Object> iterator() {
        return null;
    }
    
    public boolean remove(Object o) {
        return false;
    }
    
    public boolean removeAll(Collection o1) {
        return false;
    }
    

    public boolean retainAll(Collection o1)
    {
        return false;
    }

    public int size() {
        return 0;
    }
    
    public Object[] toArray() {
        return null;
    }
    
    public Object[] toArray(Object[] a){
        return null; 
    }
    
    public static void main(String[] args){
        Triplet <Float,String,Double> t1=new Triplet<Float,String,Double>();
        if(t1.add(12.00f,"Sumit",23.22))
            System.out.println("Added");
        else
            System.out.println("Ignored");        
    /*Triplet <Float,String,String> t2=new Triplet<Float,String,String>(12.00f,"Sumit","Nagpal");
    if(t2.addAll(t1))
        System.out.println("Added");
        else
            System.out.println("Ignored");
    */
    for(int i=0;i<arr.size();i++)
        System.out.println(arr.get(i));
    }

}







/*
import java.util.*;

public class Triplet<A,B,C> implements Collection {

    static ArrayList<Triplet> arr=new ArrayList<Triplet>();
    public Object a,Object b,Object c;
    Triplet()
    {

    }
    public boolean add(Triplet trip)
    {
        this(trip);
        if(arr.add(s))
            return true;  
        else
            return false;  
    }

    public boolean add(Object a)
    {
        return false;
    } 
    public boolean addAll(Collection trip)
    {

        //if(arr.java.util.Collection.ArrayList.addAll());
            return true;
        //else
          //  return false;
    }
    
    public void clear() {

    }
    
    public boolean contains(Object o) {
        return false;
    }
    
    public boolean containsAll(Collection o1) {
        return false;
    }

    public boolean equals(A a,B b,C c) {
        return false;
    }
    
    public int hashCode() {
        return 0;
    }
    
    public boolean isEmpty() {
        return false;
    }
    
    public Iterator<Object> iterator() {
        return null;
    }
    
    public boolean remove(Object o) {
        return false;
    }
    
    public boolean removeAll(Collection o1) {
        return false;
    }
    

    public boolean retainAll(Collection o1)
    {
        return false;
    }

    public int size() {
        return 0;
    }
    
    public Object[] toArray() {
        return null;
    }
    
    public Object[] toArray(Object[] a){
        return null; 
    }
    
    public static void main(String[] args){
        Triplet <Float,String,Double> t1=new Triplet<Float,String,Double>();
        if(t1.add(12.00f,"Sumit",23.22))
            System.out.println("Added");
        else
            System.out.println("Ignored");        
    /*Triplet <Float,String,String> t2=new Triplet<Float,String,String>(12.00f,"Sumit","Nagpal");
    if(t2.addAll(t1))
        System.out.println("Added");
        else
            System.out.println("Ignored");
    
    for(int i=0;i<arr.size();i++)
        System.out.println(arr.get(i));
    }

}
*/