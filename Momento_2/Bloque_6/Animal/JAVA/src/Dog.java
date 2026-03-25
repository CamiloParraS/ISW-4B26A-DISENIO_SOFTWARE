public class Dog extends Mammal {

    private razaDog raza;

    public Dog() {
        super();
    }

    public Dog(String name, razaDog raza) {
        super(name);
    }

    public razaDog getRaza() {
        return raza;
    }

    public void setRaza(razaDog raza) {
        this.raza = raza;
    }

    @Override
    public String toString() {
        return "Dog [" + super.toString() + " Raza: " + raza + "]";
    }

    public void greets() {
        System.out.println("Woof!");
    }
}
