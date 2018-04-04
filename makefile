cpp_vs_python.png : NicolasVergara_Graficas.py times_python.csv times_cpp.csv
	python3 NicolasVergara_Graficas.py
times_cpp.csv : gen_times.x
	./gen_times.x>times_cpp.csv
times_python.csv : NicolasVergara_GenerarTiempos.py
	python3 NicolasVergara_GenerarTiempos.py> times_python.csv
gen_times.x : NicolasVergara_GenerarTiempos.cpp       
	c++ NicolasVergara_GenerarTiempos.cpp -o gen_times.x