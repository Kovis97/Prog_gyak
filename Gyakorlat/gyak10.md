## 10. gyakorlat: Header fájlok, több forrásfájl linkelése

- 1-2 IDÉ-ben megmutatni, hogy kell forrásfájlokat létrehozni / hozzáadni egy projekthez
- Függvények deklarációja vs. definíciója
- Include működésének bemutatása
- Header guard (miért? hogyan? ismétlés a kapcsolódó makrókról)
- Alábbi két feladatból valamelyiket közösen megcsinálni, a másikat önálló munkában
- Minden struktúra és a hozzátartozó (nem tag-) függvények deklarációja külön headerben, a függvények implementációja cpp-ben
- Mindenhol csak a szükséges header fájlok include-olása
- Megmutatni, hogy hogy kell szövegfájlból bemásolni a bemenetet parancssorba, hogy ne kelljen sokat gépelni

### Feladat - Cégek
- Struktúrák és a hozzátartozó függvények
    - Cég
        - Cégnév (szóközökkel)
        - Alapítás dátuma
        - Telephelyek tömbje (dinamikusan foglalva, bemenetről kapott méretűre)
        - Telephelyek száma
        - *Éves bevételt kiszámító függvény (telephelyek adatait összesíti)*
        - `struct Ceg beolvas()`
    - Telephely
        - Helység neve
        - Alapítás dátuma
        - Utolsó év bevétele (egész)
        - `void beolvas(struct Telep\*)`
        - `void kiir(struct Telep)`
    - Dátum
        - Év
        - Hónap
        - Nap
        - (Ellenőrizni nem kell)
        - *Összehasonlító függvény (-1/0/1)*
- main.cpp-ben megvalósítandó program
    - 5 cég adatainak beolvasása
    - A legrégebben alapított cég adatainak kiírása (név, dátum, bevétel)
    - Helységnév bekérése után az ottlévő telephelyek adatainak kiírása (bármely cégekből)

### Feladat - Órarend-kezelő
- Struktúrák és a hozzátartozó függvények
    - Személy
        - Név (szóközökkel)
        - Órarend: 5-elemű Nap-tömb
    - Nap
        - Tanórák száma
        - Tanórák (dinamikus tömb)
    - Tanóra
        - Tárgy neve (szóközökkel)
        - Kezdő időpont
        - Vége
        - `bool utkozik(Ora, Idopont)` *Időpont-összehasonlító fgv használatával*
    - Időpont
        - Óra
        - Perc
        - *Összehasonlító függvény (-1/0/1)*
- main.cpp-ben megvalósítandó program
    - 4 személy adatainak beolvasása
    - Nap (index) bekérése után megmondani, kinek van a legtöbb tanórája aznap (hossztól függetlenül)
    - Nap és időpont bekérése után kilistázni, hogy kinek milyen órája (órái) vannak akkor vagy épp szabad-e
