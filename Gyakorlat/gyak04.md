## 4. gyakorlat (for, double, típuskonverzió, literál utótagok, math) 

### Feladat - Szinusz görbe ascii art stílusban
*Megoldás*: `megoldas04szinusz.cpp` - [link](megoldas04szinusz.cpp)
- *Példa*: [pelda04szinusz.md](pelda04szinusz.md)
- Jelezzünk ki a fenti példához hasonló szinusz görbét ascii art stílusban.

### Feladat - Másodfokú egyenlet
*Megoldás*: `megoldas04masodfokuA.cpp` - [link](megoldas04masodfokuA.cpp)
- Olvassunk be `a` `b` és `c` együtthatókat szabvány bemenetről
- Amennyiben az értékek alapján alkotott másodfokú egyenletnek (ax^2+bx+c=0) van valós gyöke írja ki az eredményt, különben pedig `Az egyenletenek nincs valos gyoke` szöveget. 
- *Megjegyzés*: Az egyenletnek akkor van valós gyöke, ha a négyzetgyökjel alatt álló diszkrimináns nemnegatív. 
- Jelezzük ki a megoldást
- *Segítség*: az `4x^2+8x-5=0` egyenlet megoldásai: `x1=0.5 x2=-2,5`
- *Plusz feladat*: amennyiben a diszkrimináns 0 és csak 1 megoldás van, akkor ezt külön jelezze (`megoldas04masodfokuB.cpp`)

### Feladat - Rendszám ellenőrző
*Megoldás*: `megoldas04rendszamA.cpp` - [link](megoldas04rendszamA.cpp)
- Írjon c++ programot, amely egy string validációját végzi el. A formátum egyezzen meg a leggyakoribb magyar rendszámtábla formátumával. Eszerint 7 karakter hosszúságú legyen, ennek elején három (nagy vagy kis) betű után egy kötőjel és végül három szám következzen. 
- A program `k` betűre lépjen ki.
- *Plusz feladat*: Fejlessze tovább az előző feladatot, úgy, hogy a 3 betű, kötőjel, 3 szám mellett a 3 betű, három szám és a 3 betű, space, 3 szám formátumot is fogadja el. Pl. `SZE-001`, `SZE 001`, `SZE001` (`megoldas04rendszamB.cpp` ToDo)


