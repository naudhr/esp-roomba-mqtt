all:
	    test -f src/secrets.h || cp src/secrets.example.h src/secrets.h
	    $(HOME)/out/platformio_python_venv/bin/pio run
