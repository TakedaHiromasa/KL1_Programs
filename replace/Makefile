KLIC=klic

KL1_FILE := $(wildcard *.kl1)
OUT_FILE := $(basename $(KL1_FILE))

all: $(OUT_FILE)

$(OUT_FILE): $(KL1_FILE)
	$(KLIC) -o $@ $<

clean:
	/bin/rm -f *.c *.ext *.h *.o klic.db klicdb.init libklic.db \
		work* *~ core $(TESTPROGS)

