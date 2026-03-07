import java.util.ArrayList;
import java.util.List;

public class Fabrica {
    private List<Planta> plantas;

    public Fabrica() {
        this.plantas = new ArrayList<>();
    }

    public void agregarPlanta(Planta planta) {
        plantas.add(planta);
    }

    public List<Planta> getPlantas() { return plantas; }

    public List<Carro> producirCarros() {
        List<Carro> carros = new ArrayList<>();
        for (Planta planta : plantas) {
            carros.add(planta.fabricar());
        }
        return carros;
    }
}