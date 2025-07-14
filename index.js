class Heroi {
    constructor(nome, idade, tipo) {
        this.nome = nome;
        this.idade = idade;
        this.tipo = tipo;
    }

    atacar() {
        let ataque;

        if (this.tipo === "mago") {
            ataque = "magia";
        } else if (this.tipo === "guerreiro") {
            ataque = "espada";
        } else if (this.tipo === "monge") {
            ataque = "artes marciais";
        } else if (this.tipo === "ninja") {
            ataque = "shuriken";
        } else {
            ataque = "um ataque indefinido";
        }

       
        console.log(`O ${this.tipo} atacou usando ${ataque}`);
    }
}




let heroiMago = new Heroi("Gandalf", 1000, "mago");
let heroiGuerreiro = new Heroi("Arthur", 30, "guerreiro");
let heroiMonge = new Heroi("Shaolin", 50, "monge");
let heroiNinja = new Heroi("Hanzo", 25, "ninja");
let heroiDesconhecido = new Heroi("Desconhecido", 40, "caçador");

// Chamando o método atacar para todos os heróis no console de uma vez
heroiMago.atacar();
heroiGuerreiro.atacar();
heroiMonge.atacar();
heroiNinja.atacar();
heroiDesconhecido.atacar();