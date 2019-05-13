#include "pch.h"
#include "Pizza.h"
#include <iostream>

Pizza::Pizza()
{

	ingr.sos_rosii = 0; ingr.sos_bbq = 0 ,ingr.sos_samurai=0;
	ingr.parmezan = 0; ingr.cheddar = 0; ingr.mozzarella = 0;
	ingr.sunca = 0; ingr.vita = 0; ingr.pepperoni = 0; ingr.bacon = 0; ingr.chorizo = 0; ingr.pui = 0; ingr.ton = 0; ingr.carnati = 0;
	ingr.ardei = 0; ingr.rosii = 0; ingr.masline = 0; ingr.ceapa = 0; ingr.jalapeno = 0; ingr.ciuperci = 0; ingr.porumb = 0;
}

void Pizza::display()
{
	std::cout << "Tipul de pizza nu a fost ales";
}

int Pizza::PriceCalculator()
{
	return manopera +
		ingr.sos_rosii*ingr.pret_sos_rosii + ingr.sos_bbq*ingr.pret_sos_bbq + ingr.sos_samurai*ingr.pret_sos_samurai+
		ingr.parmezan*ingr.pret_parmezan + ingr.cheddar*ingr.pret_cheddar + ingr.mozzarella*ingr.pret_mozzarella +
		ingr.sunca*ingr.pret_sunca + ingr.vita*ingr.pret_vita + ingr.pepperoni*ingr.pret_pepperoni + ingr.bacon*ingr.pret_bacon + ingr.chorizo*ingr.pret_chorizo + ingr.pui*ingr.pret_pui + ingr.ton*ingr.pret_ton + ingr.carnati*ingr.pret_carnati +
		ingr.ardei*ingr.pret_ardei + ingr.rosii*ingr.pret_rosii + ingr.masline*ingr.pret_masline + ingr.ceapa*ingr.pret_ceapa + ingr.jalapeno*ingr.pret_jalapeno + ingr.ciuperci*ingr.pret_ciuperci + ingr.porumb*ingr.pret_porumb;

}