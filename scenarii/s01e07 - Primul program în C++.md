---
title: S01E07 - Primul program în C++
description: 
date: 2020-09-06

goals:
* Să vedem cum arată un program
* Să înțelegem programul linie cu linie
* Cum să faceți și voi același lucru

---

# S01E07 - Primul program în C++

Am să schimb un pic ordinea în care se învață informatica. De obicei se începe cu niște scheme logice, apoi cu pseudocod și în cele din urmă apucați să scrieți un program.

Azi voi scrie un program C++ foarte simplu. Pentru cei care ați scris deja programe e posibil să vi se pară mult prea banal, dar cred că tot veți găsi satisfacție în a înțelege de ce fiecare linie este așa cum este.

În plus, veți vedea, tot cu plăcere sper, cum mai multe concepte pe care le-am prezentat în ultimele două săptămâni se așează împreună.

Pentru cei pentru care care azi este prima oară, nu vă speriați, voi explica pe scurt fiecare dintre noțiuni.

## Programul

Cum spuneam, azi scriem un program în C++. Un "program" este o serie de instrucțiuni pe care i le dăm computerului, iar azi îi vom spune doar să tipărească o linie de text pe ecran.

C++ este un limbaj de programare. Limbajul de programare este o convenție prin care dăm instrucțiuni calculatorului. C++ este o astfel de convenție.

Haideți să scriem primul program deci:

```
#include <iostream>

int main()
{
  std::cout << "Salut, lume!" << std::endl;
  return 0;
}
```

### Linia 1: `#include <iostream>`

`#include` se numește *directivă de preprocesare* și ce face este să aducă și să includă integral alte fișiere în programul nostru. Acest lucru ne permite să nu avem programe cu sute de mii sau câteodată milioane de linii puse în același document. Cum ar fi dacă toată wikipedia ar fi pe o singură pagină? Nu prea bine. "Directivă" înseamnă că dăm un ordin, iar "preprocesare" înseamnă că de fapt ordinul se dă înainte de a face orice alt lucru. În acest caz includerea se întâmplă ca prim pas, înainte de procesare, adică "pre-procesare". Directivă de preprocesare. Vom afla mai multe în timp. 

Codul liniei 1 include deci conținutul fișierului iostream. `<` și `>` se numesc paranteze unghiulare (sunt aceleași simboluri ca și _mai mic_ și _mai mare_) dar aici ne gândim la ele și le interpretăm ca fiind paranteze. Nu rotunde, nu drepte, nu acolade, ci unghiulare.

Cum ziceam un limbaj de programare este o convenție și în lumea C++ și a familiei sale, `<` și `>` sunt folosite pentru a specifica ce fișier dorim să includem în programul nostru.

Iar în programul nostru ne dorim să includem un fișier numit `iostream`. Calculatoarele au intrări de date (_input_ în engleză, sau `i`) -- cum ar fi de exemplu tastatura, mouse-ul, rețeaua WiFi (când primim informații), senzori de ultrasunete (la un ecograf), etc.

Calculatoarele au de asemenea ieșiri (_output_ în engleză, sau `o`) -- cum ar fi ecranul, rețeaua WiFi (când trimitem informații), sau comanda unui motor (pentru un computer de pe un robot).

`IO` este deci o prescurtre pe care o veți întâlni destul de des. Înseamnă intrări și ieșiri

* de la oameni -- via tastatură și ecran;
* de la alte calculatoare -- via rețea;
*  sau de la senzori și echipamente pentru computerele speciale).

Este un concept important, pentru că de fapt computerele au intrări pe care le procesează în ieșiri. I-computer-O. IO. Se citește "ai-ou" (cu un u care abia se aude) iar în românește nu se traduce II, ci IE (Intrări - iEșiri).

"Stream" înseamnă flux, pârâu, ceva care curge. Și unele IO sunt "curgătoare". De exemplu când scrii un text la tastatură, literele "curg" înspre calculator una după alta. Când calculatorul afișează un text în consolă (ecranul negru despre care povesteam săptămâna trecută), literele textului curg spre consolă una câte una.

`iostream` este un fișier care conține cod pe care alți programatori l-au scris pentru noi, astfel încât noi să putem citi și scrie informații de la și către fluxuri de intrare/ieșire -- `IO Streams` adică fără să ne batem capul cu lucrurile complicate din spatele scenei

În cazul nostru includem `iostream` pentru a avea acces la funcția `cout` care pune un text pe ecran. `iostream` știe să "discute" cu sistemul de operare, pentru că este de fapt sistemul de operare care știe de fapt cum arată o literă, ce comenzi trebui.

### Linia 2 - Goală
Liniile goale nu au niciun efect asupra unui program.

### Linia 3 - `int main()`

Linia trei este începutul la ceea ce se numește o funcție. În limbajele de programare o funcție nu este ca în matematică. Seamănă un pic cu funcțiile din matematica, dar sunt mai relaxate.

Vom descoperi toate detaillile funcțiilor în timp, dar până una alta, ce trebuie să reținem este ca o funcție este un grup de comenzi care sunt executate împreună atunci când sunt apelate. O funcție uneori poate să aibă un rezultat, pe care spunem că îl întoarce (`return` în engleză). În matematică o funcție are întodeauna un rezultat. În programare putem avea funcții care nu întorc nimic. Vom vedea într-una din următoarele lecții la ce folosesc funcțiile care nu întorc nimic. Deocamdată nu e important.

Primul cuvânt, `int` ne spune că funcția noastră va întoarce o valoare și această valoare este întreagă. Al doilea cuvânt `main` este numele funcției (cum este funcția `f` de la matemetică). O funcție poate să aibă orice nume. `main` este mai special. Înseamnă `principal` și în C++ este punctul de intrare. Într-un program C++ puteam avea oricâte funcții. Dar una este `main` și ea este executată atunci când programul este executat. Între paranteze se află argumentele funcției, este ca _x_ în _f de x_. În cazul nostru `()` paranteze goale înseamnă că nu avem niciun parametru.

Linia trei este de fapt o declarație de funcție. De fapt ce comunicăm este asta:
"Calculatorule, eu am o funcție care se numește «main», nu are niciun parametru și atunci când o vei executa, ea va întoarce o valoare întreagă"

Declarația unei funcții este diferită de execuția unei funcții. Declarația în cazul nostru este urmată de _corpul_ funcției, care spune ce instrucțiuni vor trebui executate dacă cineva apelează (cheamă/execută) această funcție.

O funcție este definită (liniile 3-7). Definiția unei funcții este ca o rețetă de prăjitură. Pe rețetă ai ce instrucțiuni trebuie să pui în aplicare ca să întorci valoarea "prăjitură". Nu rețeta îți dă prăjitura. Rețeta definește ce trebuie să faci. Ai prăjitura atunci când execuți rețeta. Când o apelezi.

### Linia 4 - `{`

Acoladele sunt folosite în C++ pentru a grupa instrucțiuni. În cazul nostru grupează instrucțiunile de la liniile 5 și 6, adică ceea ce numim _corpul_ (_body_) funcției. Acolada deschisă înseamnă deci "aici începe un bloc de instrucțiuni, care se termină cu acoladă închisă".

Avem nevoie de grupuri (numite blocuri) în mai multe situații, vom vedea. Corpul unei funcții este una dintre ele. Dacă folosim exemplu cu rețeta.

### Linia 5 - `std::cout << "Salut, lume!" << std::endl;`

0. spațiile -- sunt opționale, dar fac codul să fie citit mai bine. Poartă numele de *intent* și aliniază mai la dreapta conținutul unui bloc ca să știm când începe și când se termină acel bloc. Nu sunt obligatorii, dar ajută enorm. 
1. `std::cout` este instrucțiunea care scrie ceva pe ecran. `std` este *numele de familie* al acestei instrucțiuni. `std` vine de la standard. Numele de familie (denumirea lui este `namespace`) este folositor pentru cazul în care altcineva dorește să scrie o instrucțiune similară. `std::cout` Se citește `standard si-aut` or `es-ti-di si-aut` și vine de la *console out*, adică consola text trebuie să scrie ceva.

2. `<<` este un operator special pe care eu îl interpretez ca o direcție de curgere al `stream`-ului (vezi linia 1) de ieșire, înspre consolă.

3. `"Salut, lume!"` este un șir de litere. O literă sau cifră sau semn de punctuație se numește caracter. Și mai multe caractere formează un șir de caractere. În engleză se numește "fir" de caractere (închipuiți-vă că mai multe litere sunt prinse pe un fir de rufe), iar la fir se zice _string_, de aceea mai spunem că `"Salut, lume!"` este un _string_. String-urile în C++ sunt delimitate de ghilimele, ca niște citate. Pentru calculator ele sunt ca niște citate.

4. `<<` este la fel ca la 2. Ce este de observat e că putem să avem oricâți asfel de operatori.

5. `std::endl` este un string special, care înseamnă `sfârșit de linie și linie nouă` -- *end line* (citit _end-lain_) este ca un enter în Word sau în orice editor de texte.

6. `;` este un caracter special în C++, pentru că el separă instrucțiunile între ele. În exemplul cu rețeta . Compilatorul C++ (acel program care transformă programul nostru în cod binar executabil) este foarte exigent cu punct și virgulele, pentru că alfel nu știe când se termină o instrucțiune și când începe alta. De aceea veți vedea că după fiecare instrucțiune punem `;`.

### Linia 6 - `return 0;`

Pentru a instri calculatorul să întoarcă o valoare, instrucțiunea este `return`.

Valoare întoarsă de funcția main este folosită de sistemul de operare să știe dacă programul nostru s-a încheiat cu succes sau cu eroare.

Nu toate programele se termină cu succes. Dacă vă gândiți la exemplul pe care l-am dat săptămâna trecută cu spălatul pe dinți, inițiativa noastră se putea termina cu eroare în anumite condiții (de exemplu când nu aveam pastă de dinți și nici rezervă).

În C++ funcția main dacă întoarce valoarea 0 înseamnă că totul a fost bine. Valorile diferite de zero înseamnă "eroare". Ceea ce este contraintuitiv, dar de fapt puteți să vă gândiți că sistemul de operare îl "întreabă" pe program: _"Au fost erori?"_ iar programul răspunde "Zero!"

### Linia 7 - `}`

Este linia care încheie 

## Compilare și execuție

Live Demo. Scriu linia care îl compilează. Explic cum în CodeBlocks acest lucru este ascuns.


## Cum faceți și voi același lucru

Live demo, browser, îi pun să-și încarce CodeBlocks pe Windows. Ceilalți, repl.it

## Sumar

* Folosim `std:cout` pentru a afișa lucruri pe ecran
* Trebuie să includem `iostream` dacă dorim să folosim `std::cout`.
* Execuția codului (a programului) începe de la funcția `main()`. Funcția `main()` este obligatorie.

## Extra

* Un program C care nu face nimic
* Mai multe linii cout
* Definirea unei alte funcții care nu ia niciun parametru, dar grupează liniile de cout de mai sus
* [anticipăm] adăugarea unui parametru la funcție. Facem fizzbuzz.

* Cum arată programul de mai sus în scheme logice?
* Cum arată programul de mai sus în pseudocod?
