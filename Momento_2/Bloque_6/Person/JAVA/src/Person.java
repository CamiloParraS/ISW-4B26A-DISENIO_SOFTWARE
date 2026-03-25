import java.time.LocalDate;
import java.time.Period;

public class Person {
    private String name;
    private String Address;
    private LocalDate fechaNacimiento;

    public Person(String name, String address, LocalDate fechaNacimiento) {
        this.name = name;
        this.Address = address;
        this.fechaNacimiento = fechaNacimiento;
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

    public int getEdad() {
        if (fechaNacimiento == null)
            return 0;

        LocalDate today = LocalDate.now();
        return Period.between(fechaNacimiento, today).getYears();
    }

    public LocalDate getFechaNacimiento() {
        return fechaNacimiento;
    }

    public void setFechaNacimiento(LocalDate fechaNacimiento) {
        this.fechaNacimiento = fechaNacimiento;
    }

    @Override
    public String toString() {
        return "Person[" + "name= '" + name + ", Address= '" + Address + ",  Edad= " + getEdad()
                + "]";
    }
}
