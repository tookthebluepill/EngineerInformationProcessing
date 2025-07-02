// 19. 다음은 Java 코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.

class Main {
 
  public static class Collection<T>{
    T value;
 
    public Collection(T t){
        value = t;
    }
 
    public void print(){
       new Printer().print(value);
    }
 
   class Printer{
      void print(Integer a){
        System.out.print("A" + a);
      }
      void print(Object a){
        System.out.print("B" + a);
      } 
      void print(Number a){
        System.out.print("C" + a);
      }
   }
 }
 
  public static void main(String[] args) {
      new Collection<>(0).print();
  }
  
}