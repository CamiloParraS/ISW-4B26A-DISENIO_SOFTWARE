import java.time.LocalDate;
import java.time.Period;

public class App {
    public static void main(String[] args) throws Exception {

        System.out.println("\n--- Person, Student, and Staff Example ---\n");

        Person person = new Person("John Doe", "123", LocalDate.of(1950, 4, 4));
        System.out.println(person);

        Student student = new Student("Jane Smith", "La casa que queda al lado de la de mi vecino", LocalDate.of(1000, 5, 28),  "Computer Science", 2, 15000.0);
        System.out.println(student);

        Staff staff = new Staff("Jhon Connor", "789 edifico catalina", LocalDate.of(2036, 7, 28), "Engineering", 50000.0);
        System.out.println(staff);


    }
}
