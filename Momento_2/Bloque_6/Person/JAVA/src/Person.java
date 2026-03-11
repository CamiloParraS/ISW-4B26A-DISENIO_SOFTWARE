public class Person {
    private String name;
    private String Address;

    public Person(String name, String address) {
        this.name = name;
        this.Address = address;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return Address;
    }

    public void setAddress(String address) {
        this.Address = address;
    }

    @Override
    public String toString() {
        return "Person[" +
                "name= '" + name  +
                ", Address= '" + Address +
                ']';
    }
}
