// 1. 다음은 Java 코드이다. 올바른 출력 결과를 작성하시오.

public class main{
    public static void main(String[] args) {
        A b = new B();
        b.paint();
        b.draw();
    }
}
 
class A {
    public void paint() {
        System.out.print("A");
        draw();
    }
    public void draw() {
        System.out.print("B");
        draw();
    }
}
 
class B extends A {
    public void paint() {
        super.draw();
        System.out.print("C");
        this.draw();
    }
    public void draw() {
        System.out.print("D");
    }
}