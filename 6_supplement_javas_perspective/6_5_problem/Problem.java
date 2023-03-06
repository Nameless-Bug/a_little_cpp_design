class Generics{
    // How to make sure for any given class T, T overloads operator+ and the return type is still T?
    // public static <T> T add(T t1, T t2){
    //     return t1 + t2;
    // }

    // How to make sure for any given class T, T has method of doubleValue()?
    // public static <T> double add(T t1, T t2){
    //     return t1.doubleValue() + t2.doubleValue();
    // }

    // How to make sure T is a derived class of Number?
    // public static <T> double add(T t1, T t2){
    //     return ((Number) t1).doubleValue() + ((Number) t2).doubleValue();
    // }

    public static <T> double add(T t1, T t2){
        assert t1 instanceof Number;
        assert t2 instanceof Number;
        return ((Number) t1).doubleValue() + ((Number) t2).doubleValue();
    }

}

class Person{}

public class Problem{
    public static void main(String[] args){

        // call by user defined class which cannot be cast to Number
        // Error happens in runtime
        // Is compile time check possible?

        // Person p1 = new Person();
        // Person p2 = new Person();
        // System.out.println(Generics.add(p1, p2)); 
    }
}