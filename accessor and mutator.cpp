//accessor

class MaClasse{
private :
TypeDeMaVariable MaVariable;

public :
TypeDeMaVariable GetMaVariable();

};

TypeDeMaVariable MaClasse::GetMaVariable(){
return MaVariable;

}
//mutator

class MaClasse{
private :
TypeDeMaVariable MaVariable;

public :
void SetMaVariable(TypeDeMaVariable);

};

MaClasse::SetMaVariable(TypeDeMaVariable MaValeur){
MaVariable = MaValeur;

}
