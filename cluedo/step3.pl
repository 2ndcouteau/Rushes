swap(r,l).
swap(l,r).

trip([X,X,Goat,Cabbage],wolf,[Y,Y,Goat,Cabbage]) :- swap(X,Y).

trip([X,Wolf,X,Cabbage],goat,[Y,Wolf,Y,Cabbage]) :- swap(X,Y).

trip([X,Wolf,Goat,X],cabbage,[Y,Wolf,Goat,Y]) :- swap(X,Y).

trip([X,Wolf,Goat,Cabbage],nobody,[Y,Wolf,Goat,Cabbage]) :- swap(X,Y).

sameSide(X,X,_).
sameSide(X,_,X).

safe([Peon,Wolf,Goat,Cabbage]) :- sameSide(Peon,Goat,Wolf), sameSide(Peon,Goat,Cabbage).

solution([r,r,r,r],[]).

solution(State,[Move|OtherMove]) :-
trip(State,Move,NextState),
safe(NextState),
solution(NextState,OtherMove).

show([X|L]):-		write(X),nl, show(L) ; true.

resolve:- length(X, 7), solution([l,l,l,l], X), show(X), !.
