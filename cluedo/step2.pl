liste_des_maisons([
maison(_, _, _, _, _),
maison(_, _, _, _, _),
maison(_, _, _, _, _),
maison(_, _, _, _, _),
maison(_, _, _, _, _)
]).

afficher_liste([X|L]) :- write(X),nl, afficher_liste(L) ; true.

appartient_a(X,[X|_]).
appartient_a(X,[_|L]) :- appartient_a(X,L).

est_a_droite_de(A, B, [B, A | _]).
est_a_droite_de(A, B, [_ | Y]) :- est_a_droite_de(A, B, Y).

est_voisin_de(A, B, [A, B | _]).
est_voisin_de(A, B, [B, A | _]).
est_voisin_de(A, B, [_ | Y]) :- est_voisin_de(A, B, Y).

resoudre :- liste_des_maisons(MAISONS),
    
appartient_a(maison(rouge, anglais, _, _, _), MAISONS),
appartient_a(maison(_,suedois, chiens,_,_), MAISONS),
appartient_a(maison(_,danois,_,the,_), MAISONS),
est_a_droite_de(maison(blanc,_,_,_,_), maison(verte,_,_,_,_), MAISONS),
appartient_a(maison(verte,_,_,cafe,_), MAISONS),
appartient_a(maison(_,_,oiseaux,_,pallmall), MAISONS),
appartient_a(maison(jaune, _, _, _, dunhill), MAISONS),
MAISONS = [_, _, maison(_, _, _, lait, _), _,_],
MAISONS = [maison(_, norvegien, _, _, _)|_],
est_voisin_de(maison(_,_,_,_,blend), maison(_,_,chat,_,_), MAISONS),
est_voisin_de(maison(_,_,_,_,dunhill), maison(_,_,cheval,_,_), MAISONS),
appartient_a(maison(_,_,_,binouse,bluemaster), MAISONS),
appartient_a(maison(_,allemand,_,_,prince), MAISONS),
est_voisin_de(maison(_,norvegien,_,_,_), maison(bleue,_,_,_,_), MAISONS),
est_voisin_de(maison(_,_,_,eau,_), maison(_,_,_,_,blend), MAISONS),
appartient_a(maison(_,_,poisson,_,_), MAISONS),
afficher_liste(MAISONS), !.