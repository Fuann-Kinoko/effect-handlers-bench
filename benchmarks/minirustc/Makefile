MINIRUSTC=/minirustc/build/minirustc
MINIRUSTC_FLAGS=--include-std=/minirustc/std -O -emit=exe

bench: build
	hyperfine --warmup 3 --export-csv results.csv \
		'countdown/main' \
		'fibonacci_recursive/main' \
		'product_early/main' \
		'iterator/main' \
		'generator/main' \
		'parsing_dollars/main' \
		'resume_nontail/main' \
		'handler_sieve/main'

test:
	@echo "--- countdown ---"
	cd countdown && \
		sed -i 's/let n = 200000000;/let n = 5;/' main.rs; \
		$(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS) && \
		./main > actual && \
		echo 0 > expected && \
		diff expected actual; \
		RET=$$?; \
		sed -i 's/let n = 5;/let n = 200000000;/' main.rs; \
		exit $$RET
	@echo "--- fibonacci_recursive ---"
	cd fibonacci_recursive && \
		sed -i 's/fibonacci(42)/fibonacci(5)/' main.rs; \
		$(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS) && \
		./main > actual && \
		echo 5 > expected && \
		diff expected actual; \
		RET=$$?; \
		sed -i 's/fibonacci(5)/fibonacci(42)/' main.rs; \
		exit $$RET
	@echo "--- product_early ---"
	cd product_early && \
		sed -i 's/let n = 100000;/let n = 5;/' main.rs; \
		$(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS) && \
		./main > actual && \
		echo 0 > expected && \
		diff expected actual; \
		RET=$$?; \
		sed -i 's/let n = 5;/let n = 100000;/' main.rs; \
		exit $$RET
	@echo "--- iterator ---"
	cd iterator && \
		sed -i 's/let n = 40000000;/let n = 5;/' main.rs; \
		$(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS) && \
		./main > actual && \
		echo 15 > expected && \
		diff expected actual; \
		RET=$$?; \
		sed -i 's/let n = 5;/let n = 40000000;/' main.rs; \
		exit $$RET
	@echo "--- generator ---"
	cd generator && \
		sed -i 's/let n = 25;/let n = 5;/' main.rs; \
		$(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS) && \
		./main > actual && \
		echo 57 > expected && \
		diff expected actual; \
		RET=$$?; \
		sed -i 's/let n = 5;/let n = 25;/' main.rs; \
		exit $$RET
	@echo "--- parsing_dollars ---"
	cd parsing_dollars && \
		sed -i 's/let n = 20000;/let n = 10;/' main.rs; \
		$(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS) && \
		./main > actual && \
		echo 55 > expected && \
		diff expected actual; \
		RET=$$?; \
		sed -i 's/let n = 10;/let n = 20000;/' main.rs; \
		exit $$RET
	@echo "--- resume_nontail ---"
	cd resume_nontail && \
		sed -i 's/let n = 20000;/let n = 5;/' main.rs; \
		$(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS) && \
		./main > actual && \
		echo 37 > expected && \
		diff expected actual; \
		RET=$$?; \
		sed -i 's/let n = 5;/let n = 20000;/' main.rs; \
		exit $$RET
	@echo "--- handler_sieve ---"
	cd handler_sieve && \
		sed -i 's/let n = 60000;/let n = 10;/' main.rs; \
		$(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS) && \
		./main > actual && \
		echo 17 > expected && \
		diff expected actual; \
		RET=$$?; \
		sed -i 's/let n = 10;/let n = 60000;/' main.rs; \
		exit $$RET

build:
	cd countdown ; $(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS)
	cd fibonacci_recursive ; $(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS)
	cd product_early ; $(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS)
	cd iterator ; $(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS)
	cd generator ; $(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS)
	cd parsing_dollars ; $(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS)
	cd resume_nontail ; $(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS)
	cd handler_sieve ; $(MINIRUSTC) main.rs $(MINIRUSTC_FLAGS)

clean:
	-rm -f */main
	-rm -f */main.o
	-rm -f */main.o.dep0.o
	-rm -f */actual
	-rm -f */expected
	-rm -f results.csv
