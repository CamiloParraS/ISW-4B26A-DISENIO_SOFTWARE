public class Cat extends Mammal {

    private razaCat raza;

    public Cat() {
        super();
    }

    public Cat(String name, razaCat raza) {
        super(name);
        this.raza = raza;
    }

    public razaCat getRaza() {
        return raza;
    }

    public void setRaza(razaCat raza) {
        this.raza = raza;
    }

    @Override
    public String toString() {
        return "Cat [" + super.toString() + ", Raza: " + raza + "]";
    }

    public void greets() {
        System.out.println("Meow!");
    }
}
