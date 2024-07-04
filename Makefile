.SILENT:

MAKEFLAGS += --no-print-directory

clean:
	rm -f Executables/*

outputLog:
	cat Logs/log.txt

run:
	g++ Codes/sampleProgram1.cpp -o Executables/sampleProgram1
	./Executables/sampleProgram1
	$(MAKE) outputLog
	$(MAKE) clean
