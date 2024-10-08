
# SONICAR
## Registro di bordo


Noi, Andrés Casenave e José Chacón, siamo studenti del quarto anno presso il Colegio Simón Bolívar II. Dopo aver appreso di questa competizione, abbiamo formato una squadra con il sogno di imparare sul concorso,

incontrare nuove persone, lavorare insieme per raggiungere un obiettivo e rappresentare la nostra scuola. Tuttavia, le nostre conoscenze erano limitate e questo ha rappresentato una grande sfida per acquisire tutte

le competenze richieste da questa competizione, così abbiamo cercato l'aiuto del nostro allenatore per acquisire conoscenze in design, robotica, meccanica, elettronica e programmazione. Sono stati mesi di duro lavoro

e molto studio per riuscire a superare le sfide legate alla costruzione di un'auto autonoma.

All'inizio del progetto, il nostro primo ostacolo è stato non trovare un terzo compagno di squadra che volesse impegnarsi in questa avventura di apprendimento, così abbiamo deciso di affrontare questa sfida con un

membro in meno. Anche se inizialmente lo abbiamo visto come un ostacolo, in seguito ci siamo resi conto dell'opportunità che rappresentava coinvolgere sempre entrambi in ogni fase del processo.

Nei primi mesi ci siamo concentrati sulla progettazione dell'auto utilizzando AutoCAD come strumento principale; una volta completato il design, abbiamo proceduto alla stampa 3D utilizzando la stampante della scuola.

Poi siamo passati ad assemblare i pezzi e testarli per un corretto montaggio e coordinamento con il resto dei componenti che l'auto doveva avere. Sono passati mesi e l'auto stava progredendo, subendo diversi cambiamenti

durante il processo, inclusa la distribuzione dei vari componenti. Infine, siamo riusciti a farla funzionare e poi abbiamo iniziato a programmarla, utilizzando il Raspberry Pi 4 come cervello del robot.

La nostra prima competizione si stava avvicinando e ci sentivamo preparati poiché il robot funzionava e soddisfaceva i requisiti iniziali della competizione, ovvero completare 3 giri sulla nostra pista.

Il giorno della competizione arrivò e quando posizionammo il robot sulla pista all'IEA, l'auto non si mosse. Ci siamo sentiti frustrati, ma abbiamo superato questo ostacolo scoprendo che un cavo impediva il suo

funzionamento, così come la mancanza di connessione a Internet che non era consentita, e fino a quel momento non ne eravamo consapevoli.

Dopo questa prima esperienza, abbiamo deciso di riprogettare completamente l'auto, basandoci sul canale T-Lab per il design. Abbiamo deciso di stamparla di nuovo, ma quando abbiamo posizionato le parti della vecchia

auto su quella nuova, ci siamo trovati limitati nello spazio a disposizione, quindi abbiamo deciso di creare un secondo piano, rimuovendo le parti non necessarie, sul quale sarebbero stati posizionati i componenti più

leggeri dell'auto, superando così questo problema.

Per evitare l'inconveniente che abbiamo avuto con il Raspberry Pi, abbiamo deciso di sostituirlo con un Arduino UNO, il che ha facilitato la programmazione perché il suo linguaggio di programmazione era più semplice.

Allo stesso modo, cambiando il design dell'auto, è stato anche necessario modificare la dimensione delle ruote in modo che l'auto non sfregasse contro il pavimento.

Arrivò il giorno della nostra seconda competizione, questa volta a Maracay, e quando abbiamo messo l'auto sulla pista, ha funzionato bene e la giuria ci ha assegnato con piacere un buon punteggio e il primo posto nella

nostra categoria. Tuttavia, abbiamo anche incontrato un inconveniente: la nostra fotocamera principale si è surriscaldata e si è bruciata insieme all'Arduino UNO. Il giorno successivo, con l'aiuto del nostro allenatore,

abbiamo verificato i componenti della fotocamera che si erano bruciati causando la bruciatura dell'Arduino. Fortunatamente, avevamo un Arduino Mega di riserva, che aveva più pin a nostra disposizione.

Dopo aver installato tutti i componenti nel nuovo design, ha funzionato con successo proprio come prima e grazie a questo secondo piano, siamo riusciti a ottenere una migliore gestione dei cavi.

Eravamo pronti per la nostra terza competizione. 

In our third competing experience, the car did not perform as expected, it crashed. After analyzing the possible reasons, we realized that the track did not have the measures we had established for the competition and

with which we had practiced. Added to this, we lost one of the cameras before the tournament. We then had to develop a completely new code on the spot for this occasion, counting with much less time than we were used to.

Durante la nostra terza esperienza di competizione, l'auto non ha funzionato come previsto, si è schiantata. Dopo aver analizzato le possibili cause, ci siamo resi conto che la pista non aveva le misure che avevamo

stabilito per la competizione e con cui ci eravamo allenati. A questo si è aggiunto il fatto che abbiamo perso una delle fotocamere prima del torneo. Abbiamo quindi dovuto sviluppare un codice completamente nuovo sul

posto per questa occasione, contando su molto meno tempo rispetto a quello a cui eravamo abituati.

Infine, abbiamo un nuovo design in fase di test, che ci permette di mettere più componenti sull'auto grazie allo spazio ampio rispetto al prototipo precedente. Abbiamo deciso di cambiare l'auto poiché, con l'implementazione

del Raspberry Pi 4 per il funzionamento della fotocamera, richiedevamo un grande spazio per far funzionare contemporaneamente l'Arduino Mega e il Raspberry e ottenere le prestazioni desiderate.

Oggi, SONICAR continua ad essere in fase di modifiche in quanto è un prototipo che è stato in continua evoluzione e sta acquisendo sempre più autonomia. Stiamo imparando e preparando per le nuove sfide imposte dalla competizione,

non solo nell'installazione dei sensori per il riconoscimento dei colori e nel prendere decisioni autonome su come superare gli ostacoli, ma anche in tutte le strategie che dobbiamo considerare al momento della programmazione e

nel prendere decisioni per il funzionamento autonomo dello stesso. Senza dubbio, questa è stata un'esperienza meravigliosa di creazione, prova, osservazione e apprendimento attraverso la nostra partecipazione.


### Descrizione del Progetto

SONICAR è un progetto di robotica sviluppato da studenti delle superiori del Colegio Simón Bolívar II. Il progetto prevede un veicolo autonomo capace di navigare ed evitare ostacoli utilizzando un Arduino Mega.

Il veicolo impiega sensori a ultrasuoni per rilevare oggetti nei suoi dintorni, un motore CC per la propulsione, un servomotore per lo sterzo e un modulo di controllo del motore L298 per gestire il motore CC.
Questo progetto rappresenta un'eccellente opportunità di apprendimento nel campo della robotica e della programmazione, integrando diversi componenti e tecnologie per realizzare la sua funzionalità.


## Componenti Utilizzati

### Lista dei Materiali (BOM)

1. ### Struttura:

1.1 4x colonne principali 7mm x 7mm x 6cm

1.2 Telaio

1.3 Fili

1.4 Fori passanti x 2

1.5 Anelli x 2

1.6 Estensioni x 2

1.7 Tappi x2


1.8 Basi dei tappi x2

1.9 Asse

1.10 Base del servomotore

### 2. Componenti Elettrici:

2.1 Arduino Mega

2.2 Raspberry Pi 4

2.3 L298N

2.4 Sensori a ultrasuoni (Hc-sr04) x3

2.5 Vari cavi maschio-maschio, femmina-femmina e maschio-femmina

2.6 Base per batteria al litio

2.7 Protoboard

2.8 Raspberry Pi OV5647

### 3. Componenti Meccanici:

3.1 Ruote x 4

3.2 Motore CC TT 3-6V

3.3 Servomotore (SG90)


### Arduino Mega

L'Arduino Mega è una scheda di sviluppo a basso costo che consente di realizzare progetti di programmazione ed elettronica. È dotato di un microcontrollore a 8 bit, con una capacità di memoria limitata ma sufficiente per molti progetti, e di più porte per la connessione ad altri componenti. In questo progetto, l'Arduino Mega funge da cervello del veicolo, prendendo decisioni basate sulle informazioni fornite dai sensori e controllando i motori. La semplicità e la versatilità dell'Arduino Mega lo rendono una piattaforma ideale per l'educazione e la prototipazione.

### Raspberry Pi 4

Il Raspberry Pi 4 è un computer a basso costo e ad alte prestazioni, progettato per progetti middleware. Dotato di un processore ARM Cortex-A72 a 64 bit, offre una maggiore capacità di memoria e prestazioni rispetto alle versioni precedenti. Inoltre, dispone di più porte USB, GPIO e supporto per doppio display 4K, consentendogli di collegarsi a una vasta gamma di componenti e periferiche. In questo progetto, il Raspberry Pi 4 funge da centro di elaborazione avanzato, gestendo compiti complessi ed eseguendo algoritmi che richiedono una significativa potenza di calcolo. La potenza e la versatilità del Raspberry Pi 4 lo trasformano in una piattaforma ideale per progetti di prototipazione avanzata, progetti educativi e sviluppo tecnologico.

### Raspberry Pi OV5647

La fotocamera Raspberry Pi OV5647 è un modello di fotocamera di alta qualità, con una risoluzione di 5 megapixel, capace di catturare immagini nitide e chiare. Le sue dimensioni compatte l'hanno resa ideale per il nostro progetto, oltre alla sua facilità d'uso, versatilità e basso costo.

### Sensori a ultrasuoni (HC-SR04)

Vengono utilizzati tre sensori a ultrasuoni HC-SR04 per il rilevamento degli ostacoli. Questi sensori misurano la distanza dagli oggetti vicini emettendo un impulso sonoro a ultrasuoni e misurando il tempo impiegato per riflettere. La distanza viene calcolata in base al tempo impiegato dal suono per raggiungere l'oggetto e tornare al sensore, permettendo al veicolo di rilevare ostacoli e navigare autonomamente. I sensori a ultrasuoni sono ampiamente utilizzati nella robotica per la loro precisione e basso costo, e in questo progetto sono fondamentali per la capacità di navigazione del veicolo

### Modulo di Controllo del Motore (L298N)

Il controller del motore L298 permette di controllare la velocità e la direzione di un motore CC. Questo modulo riceve segnali dall'Arduino e li traduce in comandi che il motore può comprendere, consentendo un controllo preciso della propulsione del veicolo. L'L298N è un controller motore a doppio ponte H che può gestire due motori CC, ma in questo progetto ne viene utilizzato solo uno. La sua capacità di gestire alte tensioni e correnti lo rende ideale per progetti di robotica e automobilistica su piccola scala.

### Motore DC

Un motore a corrente continua (DC) è un motore elettrico che funziona a corrente continua. In questo progetto, il motore DC viene utilizzato per la propulsione del veicolo. La velocità e la direzione del motore sono controllate tramite il modulo L298, consentendo al veicolo di muoversi avanti o indietro a seconda delle necessità. I motori DC sono noti per la loro semplicità ed efficienza e sono una scelta popolare nei progetti di robotica grazie alla loro facilità di controllo e prestazioni affidabili.

### Servo Motore

Un servo motore viene utilizzato per controllare la direzione del veicolo. I servomotori sono motori di precisione che possono ruotare in posizioni specifiche, il che è utile per applicazioni che richiedono movimenti precisi. In questo caso, il servo motore viene utilizzato per girare le ruote anteriori del veicolo, consentendogli di cambiare direzione quando vengono rilevati ostacoli. I servomotori sono essenziali nella robotica per la loro capacità di controllo preciso, che permette una sterzatura esatta e una navigazione efficiente.

### Cables and Connectors

Vengono utilizzati vari cavi e connettori per interconnettere tutti i componenti del progetto. È importante utilizzare cavi di buona qualità e garantire connessioni salde per evitare problemi di comunicazione e alimentazione. I cavi e i connettori giusti garantiscono che tutti i componenti funzionino correttamente e comunichino in modo efficace, il che è cruciale per le prestazioni del veicolo.

# Installazione :books:
### Requisiti di Sistema
* [Beak](https://beakit.com/)
<img src="https://t.bkit.co/w_66a28fc18c347.gif" />
