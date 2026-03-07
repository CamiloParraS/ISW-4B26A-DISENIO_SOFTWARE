import java.util.ArrayList;

public class Planta {
    private Llanta tipoLlanta;
    private Chasis tipoChasis;
    private ArrayList<String> colores;

    public Planta(Llanta tipoLlanta, Chasis tipoChasis, ArrayList<String> colores) {
        this.tipoLlanta = tipoLlanta;
        this.tipoChasis = tipoChasis;
        this.colores = colores;
    }

    public Carro fabricar() {
        ArrayList<Llanta> llantas = new ArrayList<>();
        for (int i = 0; i < 4; i++) {
            llantas.add(new Llanta(tipoLlanta.getTamano(), tipoLlanta.getTipo()));
        }
        String colorElegido = colores.isEmpty() ? "blanco" : colores.get(0);
        return new Carro(colorElegido, tipoChasis, llantas);
    }

    public Llanta getTipoLlanta() { return tipoLlanta; }
    public void setTipoLlanta(Llanta tipoLlanta) { this.tipoLlanta = tipoLlanta; }

    public Chasis getTipoChasis() { return tipoChasis; }
    public void setTipoChasis(Chasis tipoChasis) { this.tipoChasis = tipoChasis; }

    public ArrayList<String> getColores() { return colores; }
    public void setColores(ArrayList<String> colores) { this.colores = colores; }
}