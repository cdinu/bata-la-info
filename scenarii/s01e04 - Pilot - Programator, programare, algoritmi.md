---
title: S01E04 - Pilot
description: 
date: 2020-09-06

goals:
* Ce face de fapt la bază un programator?
* Ce este acela un limbaj de programare, de ce este nevoie de el
* Ce sunt algoritmii, de ce e nevoie de ei?
* De ce e nasol și de ce e super că învățăm C++
* Despre compilatoare
* Primul program în C++
* Al doilea program în C++

tags:
- pilot

---

# S01E04 - Pilot - Programator, programare, algoritmi

## Ce face de fapt la bază un programator?

Atunci majoritatea se gândește la progrmatori, imaginea programatorui este în general a unui om retras, care petrece ore și ore în fața unor ecrane negre cu scris mic și de neînțeles pentru ceilalți. Este singurul prieten al calculatorului și calculatorul este singurul lui prieten. Miroase, pentru că nu prea se spală, tastează cu 120 de cuvinte pe minut, are barbă.

Toate acestea sunt niște mituri venite din filme. 

Programatorul este o persoană care rezolvă probleme. Iar modul în care ea rezolvă aceste probleme este scriind instrucțiuni pentru computere. Aceste instrucțiuni sunt software, așa cum am mai spus. Câteodată trebuie să scrii cea mai mare parte tu, ca programator, dar de cele mai multe ori bucăți întregi sunt deja scrise de alții care au avut probleme similare, sub forma unor biblioteci. Vom afla și despre acestea în curând.

Însă, în viața unui programatoare, ea petrece doar o mică parte scriind acele instrucțiuni (software). Restul timpului, este folosit pentru a înțelege problema, testând rezultatele, învățând. Este ca în sport sau ca în muzică. Sportivii și muzicienii nu își petrec decât o parte din viața lor pe teren sau în sala de concert.

Voi folosi de acum înainte femininul pentru a desemna o persoană care programează. O fac pentru a dărâma ideea proastă că ingineria computerelor, matematicile, sau orice din acest domeniu sunt meserii masculină. Chiar dacă ești băiat, chiar dacă ești fată, poți face performanță în software. Rasa, genul, originea socială, locul nașterii nu fac diferența. Pasiunea, concentrarea, ele fac diferența. Avem norocul ca în software să nu existe granițe și barierele să fie din ce în ce mai jos. Iar acum, urmărind această sesiune, lucrați în a deveni buni în acest domeniu.

Revenind, programele sunt o serie de instrucțiuni date calculatorului pentru rezolvarea unor probleme. La materia informatică din liceu problemele sunt în general venite din matematică și ele au ca rol să vă antreneze niște "mușchi" (în minte evident) pe care să-i puteți folosi în viață fie direct, scriind programe. Fie indirect, folosind aceleași principii pentru în alte domenii. Problemele pe care eu trebuie să le rezolv au o natură mai puțin matematică, dar sunt la fel de provocatoare: cum să faci răspunsurile date de elevi într-un manual digital să ajungă instantaneu la profesor, cum să faci ca același conținut să fie afișat pe un ecran mic, dar și pe un ecran mare în așa fel încât să poată fi citit bine, cum să scot zgomotul de fundal astfel încât sistemul de transcriere a vocii să funcționeze mai bine. Și multe altele.

Dar de început am început la fel -- calculând divizori comuni și căutând ieșiri din labirinturi virtuale folosind algoritmi pe care așa i-am învățat.

## Ce este acela un limbaj de programare, de ce este nevoie de el

Primul exemplu este că sunteți pe terenul de baschet, unde jucați cu prietenii și fratele vostru mai mic zice că vrea să joace și el. Vă dați seama că așa cum este acum nu poate să joace, așa că îi ziceți:

```
1. Mergi acasă
2. Vezi dacă găsești adidașii lângă cuier.
3. Dacă îi găsești, pune-i în rucsac.
4. Dacă nu îi găsești, sunt în debara. Mergi în debara, ia-i de acolo, pune-i în rucsac
5. Mergi la mine în cameră și ia mingea de baschet (trebuie să se antreneze puțin înainte să joace cu voi)
6. Dacă îți e foame, mănâncă un ochi.
7. Îmbracă-te cu tricou și pantaloni sport.
8. Pune în rucsac un tricou de schimb și un bidon de apă.
9. Vino înapoi cu rucsacul și mingea de baschet.
```

Ce vedeți ma sus (secvența de pași) este un program. Pe care voi l-ați creat și fratele vostru îl execută. I-ați dat instrucțiuni precise, pe care dacă le urmează întocmai, obiectivul de a putea juca baschet cu voi este îndeplinit.

Mai sus vă bazați pe anumite ipoteze, care evident, pentru fratele vostru sunt adevărate: că știe unde este casa, că știe să se încalțe, evident că știe limba română.

Ce ne facem însă cu computerele? Ce facem atunci când trebuie să le dăm lor instrucțiuni? Computerele sunt niște mașinării programabile superbe, dar clar nu înțeleg românește. De fapt nu "înțeleg" nimic. Ele "vorbesc", "citesc" și "ascultă" de electricitate, deci total altceva. Ele execută automat operații, fără să "gândească", să aibă "experiență", sau "bun simț" (care să le spună că ochiul de la pasul 6 nu este același ochi pe care îl verifică un oftalmolog).

Drept urmare computerelor trebuie să de adresăm într-un mod foarte precis. Atât de precis încât să nu poată lăsa loc de interpretare. Ori, orice limbă a oamenilor -- engleză, română, japoneză sau nici chiar germană, nu este atât de precisă (ar fi cumplit pentru oameni).

De aceea, au trebuit inventate limbaje speciale pentru a da instrucțiuni mașinăriilor. Acestea se numesc limbaje de programare. Nu este un singur limbaj de programare, sunt multe. În funcție de problemele care trebuie rezolvate, unele sunt mai potrivite decât altele. Veți auzi deseori de limbaje precum Python, JS (Javascript), HTML/CSS.

Există și limbaje de programare generaliste, iar C++ este unul dintre ele. Este rezultatul extinderii unul alt limbaj generalist, numit C cu un "vocabular" care să le permită programatorilor să descrie problemele mai ușor. 

Limbajele de programare sunt puntea între oameni și computere. Seamănă de cele mai multe ori cu limba engleză a oamenilor (pentru că cercetarea și dezvoltarea primelor calculatoare s-a făcut în Statele Unite și Marea Britanie, și în plus engleza este noua limbă universală a omenirii), dar au un vocabularul, sintaxa și o punctuația foarte precise.

Oamenii pot să citească, uneori, și fără semne de punctuație, dar un compute nu pot, dau eroare sau execută prostii. Aș zice că e bine să folosim corect semne de punctuație și pentru oameni, pentru a evita confuzii celebre cum este aceasta "Hai să mâncăm, copii!" față de "Hai, să mâncăm copii!".

Textul scris în limbajele de programare se numește "cod" ("code" -- citit "căud" sau "computer code" în engleză). La fel cum atunci când foloseși rime scrii versuri și produci o poezie, când scrii în limbaje de progrmare, scrii cod și produci programe și aplicații.

De asta uneori programatorilor li se mai spune uneori și "Coder"-i (citit "c`ăudări").

Vom vedea cod în scurt timp. Dacă nu azi, data viitoare. Sau oricând sunteți curioși și căutați pe YouTube sau Wikipedia.

## Ce sunt algoritmii, de ce e nevoie de ei?

Lumea se sperie când aude de "algoritmi", și doar pentru că sună complicat. E păcat, pentru că noțiunea de algoritm este una destul de simplă.

Când ne încheiem la șireturi folosim algoritmi, când mergem cu autobuzul folosim algoritmi, când ne spălăm pe mâini folosim algoritmi.

Serios. Un algoritm este o serie de acțiuni (pași) care sunt executați pentru a obține un rezultat. Ce este important este că seria de pași este ordonată și la un moment dat trebuie să se termine. 

Atunci când ne spălăm pe mâini:

```
1. Deschide robinetul
2. Vezi dacă e săpun.
3. Dacă nu mai ai săpun
	3.1. Închide robinetul
	3.2. Caută săpun de rezervă
	3.3. Dacă ai săpun de rezervă continuă cu pasul 4
	3.4. Nu poți să te speli pe mâini. Intră în modul "nu atinge mâncarea"
	3.5. GATA cu eroare
4. Pune săpun 
....
14. Șterge-te pe mâini
15. GATA
```

Cum răspunzi la un mesaj pe WhatsApp:

```
1. Deschide telefonul
2. Apasă pe notificarea de pe ecranul principal
3. Dacă e nevoie să deblochezi telefonul
	3.1 deblochează telefonul folosind metoda preferată
4. Verifică dacă telefonul este deblocat
...
10. Apasă send.
11. GATA
```

Atunci când adunați numere cu mai multe cifre și le puneți unele sub altele, acela este un algoritm. La fel înmulțirea, transformarea dintr-o bază de numerație în alta, calculul forței pe un plan înclinat. Ați întâlnit mulți algoritmi deja și îi folosiți deseori. Toate rețetele sun algoritmi.

Algoritmii și calculatoarele se înțeleg foarte bine. Pentru că algoritmii au pași preciși.

Algoritmii în informatică sunt o serie de pași care se sunt transformați în instrucțiuni pe care un calculator le poate executa. Cu ajutorul lor fie facem calcule complexe, fie rezolvăm clase de probleme (de exemplu calculul celui mai scurt traseu pe Google Maps, recomandarea următorului video de văzut pe YouTube).

Algoritmii pot fi descriși vizual, cu ajutorul unor scheme, folosind limbaje de programare sau, atunci când limbajele de programare nu sunt la îndemână, un limbaj uman, care arată mai mult sau mai puțin ca unul de calculator, limbaj numit pseudocod.

Denumirea "pseudocod" este foarte bună --"pseudo" înseamnă fals. Pseudocodul este cod "fals" dar extrem de util, pentru că poate fi transformat foarte ușor în cod adevărat.
 

## De ce e super că învățăm C++

C++ este un limbaj de programare foarte matur, drept urmare foarte stabil, de asemenea este foarte popular. A fost folosit pentru a crea browser-ul în care vedeți acest video, jocuri precum Fortnite și Unreal, sistemul de navigație și divertisment al mașini și multe multe alte programe foarte importante.

C++ este suficient de aproape de calculator încât să fie foarte rapid, dar suficient de expresiv încât să poată fi folosit eficient de oameni.

Fiind atât de puternic, este însă și foarte complex, iar fiind complex este mai greu de învâțat. De aceea vă va trebui răbdare și ceva mai mult studiu, însă rezultatele vor fi pe măsură.

## Despre compilatoare

Ce am lăsat puțin în aer (și poate v-ați prins) este cum este posibil pentru computere să execute cod scris de oameni. 

Un computer este o mașinărie care operează electonic -- cu impulsuri electrice coordonate foarte precis. Miliarde de mici întrerupătoare se deschid și închid într-un dans perfect sincronizat pentru a face miliarde de mici operații de bază în fiecare secundă. Mici operații care împreună creează rezultatul pe care ni-l dorim -- fie că este afișarea unui emoji fie că este calcularea celei mai bune traiectorii pentru ca o rachetă să revină pe pământ.

Codul scris în limbaje de progamare este un text. Cum facem să transformăm textul în ceva pe care calculatorul să poată să-l execute? Aici intervine o unealtă numită "compilator".

Un compilator este un program (aplicație), care transformă codul într-un format care se cheamă "executabil", pentru că poate fi executat direct de către computer -- de aceea în Windows programele care se pot executa direct au `.exe`. Compilatoarele sunt în general foarte complexe, dar ideea lor este simplă: transformă codul uman "sursă", în format cu 0 și 1 al calculatoarelor, numit de aceea și "binar".

Cel mai ușor este să vă gândiți la compilatoare ca la un sistem digestiv, așa cum sistemul digestiv transformă o pară în substanțe de bază primare pentru celule, la fel un compilator transformă, cu aceeași plăcere codul sursă în instrucțiuni binare pentru "celulele" computerelor.


## Primul program în C++: "Hello, world!"

Demo, pe repl.it

## Al doilea program în pseudocod și C++

Demo, pe iPad (pseudocod) și repl.it

-------

Scos:

La început, când au fost inventate și fiind foarte simple, programatorii dădeau instrucțiuni calculatoarelor folosind întrerupătoare fizice.

![Eniac 1](https://upload.wikimedia.org/wikipedia/commons/4/4e/Eniac.jpg)
![Eniac 2 - Întrerupătoare](https://upload.wikimedia.org/wikipedia/commons/a/ad/ENIAC_function_table_at_Aberdeen.jpg)
