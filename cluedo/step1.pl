femme(Nom) :- member(Nom, [anne, betty, lisa, sylvie, eve, julie, valerie]).
homme(Nom) :- member(Nom, [jacques, luc, leon, loic, paul, jules, herve, jean, marc, gerard]).
mari_de(X, Y) :- member([X, Y], [[marc, anne], [luc, betty], [jules, lisa], [leon, sylvie], [loic, eve], [paul, julie]]).
femme_de(X, Y) :- mari_de(Y, X).
enfant_de(X, Y) :- member([X, Y], [[jean, marc], [jules, marc], [leon, marc], [lisa, luc], [loic, luc], [gerard, luc],[jacques, jules], [herve, leon], [julie, leon], [paul, loic], [valerie, loic]]).
enfant_de(X, Y) :- femme_de(Y, Z), enfant_de(X, Z).
beaupere_de(X, Y) :- homme(X), enfant_de(Z, X), (mari_de(Z, Y); femme_de(Z, Y)).
bellemere_de(X, Y) :- femme(X), enfant_de(Z, X), (mari_de(Z, Y); femme_de(Z, Y)).
ancetre_de(X, Y) :- enfant_de(Y, X).
ancetre_de(X, Z) :- enfant_de(Y, X), ancetre(Y, Z).
