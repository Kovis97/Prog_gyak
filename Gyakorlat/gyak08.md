## 8. gyakorlat: Dinamikus memóriakezelés

### Feladat - Bevezetés: Változók dinamikus foglalása
- Hozzon létre egy egész számra mutató pointert
- Foglalja le az egész számnak szükséges helyet
- Olvasson be egy számot a memóriaterületre 
- Írassa ki a képernyőre a beolvasott számot 
- Szabadítsa fel a használt memóriaterületet

*Megoldás:* megoldas08dinamikusvaltozo.cpp - [link](megoldas08dinamikusvaltozo.cpp)
- *Felhasznált forrás*: PE-MIK C Programozás I feladatgyűjtemény


### Feladat - Tömbök dinamikus foglalása
- Olvasson be egy egész számot billentyűzetről 
- Foglaljon helyet annyi egész számnak, amennyi az előzőleg beolvasott szám értéke 
- Olvasson be és tároljon el annyi egész számot, amennyi az előzőleg beolvasott szám értéke
- Írassa ki a beolvasott számokat 
- Szabadítsa fel a lefoglalt memóriaterületet 

*Megoldás:* megoldas08dinamikustomb.cpp - [link](megoldas08dinamikustomb.cpp)
- *Felhasznált forrás*: PE-MIK C Programozás I feladatgyűjtemény


### Feladat - Dinamikus struktúra helyfoglalás:
- Készítsen egy koordinátát tároló struktúrát 
- Írjon függvényt, amely koordinátát olvas be billentyűzetről 
- Foglaljon dinamikus memóriát és jelenítse meg a tárolt koordinátákat 
- Szabadítsa fel a lefoglalt memóriaterületet

*Megoldás:* megoldas08dinamikusstruktura.cpp - [link](megoldas08dinamikusstruktura.cpp)
- *Felhasznált forrás*: PE-MIK C Programozás I feladatgyűjtemény


### Feladat - C típusú karaktertömbök fogalalása:
- Olvasson be egy legfeljebb 100 karakter hosszú szöveget
- Hozzon létre egy a szöveg hosszának megfelelő méretű tömböt 
- Másolja át a szöveget a számára létrehozott tömbbe 
- Írassa ki a szöveget
- Szabadítsa fel a lefoglalt memóriaterületet

*Megoldás:* megoldas08karakterlanc.cpp - [link](megoldas08karakterlanc.cpp)
- *Felhasznált forrás*: PE-MIK C Programozás I feladatgyűjtemény

### Feladat - Ismeretlen számú érték előfordulásának megszámlálása
- Olvasson be egész számokat, amíg 0-t nem kap, majd mondja meg, melyik érték hányszor szerepelt a bemeneten
- Első szint: Az értékek egy ismert, kis intervallumba eshetnek - *Megoldás:* [megoldas08megszamlalas01.cpp](megoldas08megszamlalas01.cpp)
- Második szint: Nem ismert az értékek intervalluma, de csak 100-féle érték fordulhat elő - *Megoldás:* [megoldas08megszamlalas02.cpp](megoldas08megszamlalas02.cpp)
- Harmadik szint: Tetszőleges különböző érték előfordulhat - *Megoldás:* [megoldas08megszamlalas03.cpp](megoldas08megszamlalas03.cpp)
- Negyedik szint: Az érték-darabszám párokat rendezve tárolja, és bináris kereséssel keresse meg az aktuális elemet
