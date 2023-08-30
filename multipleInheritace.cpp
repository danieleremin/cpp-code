#include <iostream>
using namespace std;

class MusicalInstrument {
public:
	virtual void play() { cout << "Playing instrument... \n"; }
	virtual void reset() { cout << "Reseting instrument... \n"; }
	virtual ~MusicalInstrument() {};
};

class Machine {
public:
	virtual void start() { cout << "Starting machine"; }
	virtual void reset() { cout << "Resetting machine \n"; }
	virtual ~Machine() {};
};

class Synthesizer: public Machine, public MusicalInstrument {
public:
	virtual ~Synthesizer() {};
};

int main() {
	Synthesizer *pSynth = new Synthesizer();
	
	pSynth->play();
	pSynth->start();
	// pSynth->reset(); won't work
	pSynth->MusicalInstrument::reset();
	pSynth->Machine::reset();
	
	delete pSynth;
	return 0;
}