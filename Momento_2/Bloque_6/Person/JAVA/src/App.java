public class App {
    public static void main(String[] args) throws Exception {

        System.out.println("\n--- Person, Student, and Staff Example ---\n");

        Person person = new Person("John Doe", "123 Main St");
        System.out.println(person);

        Student student = new Student("Jane Smith", "456 Elm St", "Computer Science", 2, 15000.0);
        System.out.println(student);

        Staff staff = new Staff("Emily Johnson", "789 Oak St", "Engineering", 50000.0);
        System.out.println(staff);
    }
}
