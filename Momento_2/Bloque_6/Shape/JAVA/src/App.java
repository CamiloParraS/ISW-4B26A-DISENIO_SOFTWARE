public class App {
    public static void main(String[] args) throws Exception {

        System.out.println("\n --- SHAPE ---");
        Shape shape = new Shape();
        System.out.println(shape);
        System.out.println(" Modifying shape properties...");
        shape.setColor("blue");
        shape.setFilled(false);
        System.out.println(shape);

        System.out.println("\n --- CIRCLE ---");
        Circle circle = new Circle();
        System.out.println(circle);
        System.out.println(" Modifying circle properties...");
        circle.setColor("green");
        circle.setFilled(true);
        circle.setRadius(2.5);
        System.out.println(circle);

        System.out.println("\n --- RECTANGLE ---");
        Rectangle rectangle = new Rectangle();
        System.out.println(rectangle);
        System.out.println(" Modifying rectangle properties...");
        rectangle.setColor("yellow");
        rectangle.setFilled(false);
        rectangle.setWidth(3.0);
        rectangle.setLength(4.0);
        System.out.println(rectangle);

        System.out.println("\n --- SQUARE ---");
        Square square = new Square();
        System.out.println(square);
        System.out.println(" Modifying square properties...");
        square.setColor("purple");
        square.setFilled(true);
        square.setSide(5.0);
        System.out.println(square);
    }
}
