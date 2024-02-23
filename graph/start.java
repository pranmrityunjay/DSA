import java.util.*;
class animal{

    int age;
    String name;

    animal(int age,String name){
        this.name=name;
        this.age=age;
    }

    void print(){
       System.out.println(this.age+" "+this.name);
    }

}


class start{
    public static void main(String args[]){
      animal a1=new animal(21, "sonia");
      a1.print();

    }
}