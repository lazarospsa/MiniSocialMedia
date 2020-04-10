all:
	gcc cron/src/main.cpp -o cron/bin/cron.bin
	./cron/bin/cron.bin