import java.time.LocalDate;

public class Staff extends Person {

    private String school;
    private double pay;

    public Staff(String name, String address, LocalDate fechaNacimiento, String school,
            double pay) {
        super(name, address, fechaNacimiento);
        this.school = school;
        this.pay = pay;
    }

    public String getSchool() {
        return school;
    }

    public double getPay() {
        return pay;
    }

    public void setSchool(String school) {
        this.school = school;
    }

    public void setPay(double pay) {
        this.pay = pay;
    }

    @Override
    public String toString() {
        return "Staff[" + super.toString() + ", school= '" + school + ", pay= " + pay + ']';
    }

}
