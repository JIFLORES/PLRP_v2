void PrintMap2(unordered_map<string,Contenedor*> mapa){

	unordered_map<string,Contenedor*>::iterator map_it;

	for(map_it=mapa.begin();map_it!=mapa.end();map_it++){
		////cout << map_it->first << " " << map_it->second->get_Id() << endl;
	}

}

void PrintMap(unordered_map<string,unordered_map<string,double> > mapa){

	unordered_map<string,unordered_map<string,double> >::iterator map_it;
	unordered_map<string,double>::iterator map2_it;

	for(map_it=mapa.begin();map_it!=mapa.end();map_it++){
		if(map_it->first[0]=='C'){
			////cout << "Nodo: " << map_it->first << endl;
			if(map_it->first=="C80"){
				////cout << map_it->second.size() << endl;
				//sleep(2);
			}
			for(map2_it=map_it->second.begin();map2_it!=map_it->second.end();map2_it++){
				////cout << "\t" << map2_it->first << " " << map2_it->second << endl;
			}
		}
	}
}

double PrintRuta(unordered_map<string,Ruta*> Rut,ofstream& data,int tipo_ruta,unordered_map<string,unordered_map<string,double> >Costos,int &contV){

	unordered_map<string,Ruta*>::iterator map_rut;
	unordered_map<string,Contenedor*>::iterator map_cont;
	unordered_map<string,Contenedor*> c_t;
	Deposito* Depot;
	string idCF;

	double cont = 0;
	for(map_rut=Rut.begin();map_rut!=Rut.end();map_rut++){
		cout << map_rut->first <<": "<<"\t" << endl;
		data << map_rut->first <<": "<<"\t" << "\n";
		Depot = map_rut->second->get_Deposito();
		cont =  map_rut->second->get_Costos()+ map_rut->second->get_Deposito()->get_costoAp() + cont;
		contV = contV + 1;
		//cout << map_rut->second->get_Contenedores().size() << endl;
		c_t = map_rut->second->get_Contenedores();
		for(map_cont=c_t.begin();map_cont!=c_t.end();map_cont++){
			idCF = map_cont->second->get_Id();
			cout << "\t"  << map_cont->second->get_Id() << endl;
			data << "\t" << map_cont->second->get_Id() << "\n";
		}
		cont = cont + tipo_ruta*Costos[idCF][Depot->get_Id()];
	}

	return cont;
}

void Escribir_Ruta(ofstream& Data,unordered_map<string,double> Costos,unordered_map<string,unordered_map<string,*Ruta> > Rutas){

	unordered_map <string,unordered_map<string,*Ruta> >::iterator R_t;
	unordered_map <string,*Ruta>::iterator m_t;
	unordered_map <sring,double>::iterator c_t;
	unordered_map <string,Contenedor*> cn_t;
	unordered_map <string,Contenedor*> cn_it;
	Deposito *Depot;
	pair<double,string> Cid;
	set<pair<double,string> > ruta_d;
	set<string> Conts;
	set<string>::iterator s_it;
	double cost = DBL_MAX,cD;
	string ContI;
	string idD,idC;


	for(R_t=Rutas.begin();R_t=!Rutas().end;R_t++){
		Data << "Rutas Dia " << R_t->first << "\n";
		for(m_t=R_t->second.begin();m_t!=R_t->second.end();m_t++){
			Data << "Ruta " << m_t->first << "\n";
			Depot = m_t->second->get_Deposito();
			cn_t = m_t->second->get_Contenedores();
			for(cn_it=cn_t.begin();cn_it!=cn_t.end();cn_t++){

				idD = Depot->get_Id();
				idC = cn_it->second->get_Id();
			  cD = Costos[idD][idC];

				if(cost > cD){
					cost = cD;
					Conts.insert(ContI);
					ContI = idC;
				}
				else{
					Conts.insert(idD);
				}

			}
			cost = DBL_MAX;
			while(Conts.size()!=0){
				for(s_it=Conts.being();s_it!=Conts.end();s_it++){
					idC = *s_it;

					if(){

					}
				}
			}
		}
	}


}
