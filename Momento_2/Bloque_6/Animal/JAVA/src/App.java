public class App {
    public static void main(String[] args) {
        // Base Animal class
        System.out.println("=== Animal Class ===");
        Animal animal1 = new Animal();
        System.out.println("Default Animal: " + animal1);
        Animal animal2 = new Animal("Lion");
        System.out.println("Parameterized Animal: " + animal2);
        animal1.setName("Elephant");
        System.out.println("Updated Animal1: " + animal1);

        // Mammal class
        System.out.println("\n=== Mammal Class ===");
        Mammal mammal1 = new Mammal();
        System.out.println("Default Mammal: " + mammal1);
        Mammal mammal2 = new Mammal("Tiger");
        System.out.println("Parameterized Mammal: " + mammal2);
        mammal1.setName("Bear");
        System.out.println("Updated Mammal1: " + mammal1);

        // Cat class
        System.out.println("\n=== Cat Class ===");
        Cat cat1 = new Cat();
        System.out.println("Default Cat: " + cat1);
        Cat cat2 = new Cat("Whiskers");
        System.out.println("Parameterized Cat: " + cat2);
        cat1.setName("Garfield");
        System.out.println("Updated Cat1: " + cat1);
        cat2.greets();

        // Dog class
        System.out.println("\n=== Dog Class ===");
        Dog dog1 = new Dog();
        System.out.println("Default Dog: " + dog1);
        Dog dog2 = new Dog("Buddy");
        System.out.println("Parameterized Dog: " + dog2);
        dog1.setName("Max");
        System.out.println("Updated Dog1: " + dog1);
        dog2.greets();
    }
}
