class Generics{
    // How to make sure for any given class T, T overloads operator+ and the return type is still T?
    // public static <T> T add(T t1, T t2){
    //     return t1 + t2;
    // }

    // How to make sure for any given class T, T has method of doubleValue()?
    // public static <T> double add(T t1, T t2){
    //     return t1.doubleValue() + t2.doubleValue();
    // }s

}

public class PrecisionDeterminedType{
    public static void main(String[] args){
        // int x = 1;
        // int y = 2;
        
        // System.out.println(Generics.add(x, y)); 
    }
}