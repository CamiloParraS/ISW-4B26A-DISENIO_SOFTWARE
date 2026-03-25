public class Dog extends Mammal {
    public Dog() {
        super();
    }

    public Dog(String name) {
        super(name);
    }

    @Override
    public String toString() {
        return "Dog [" + super.toString() + " ]";
    }

    public void greets() {
        System.out.println("Woof!");
    }
}
