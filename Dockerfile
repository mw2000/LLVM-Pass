FROM ucdavisplse/ecs260-hw3
WORKDIR /home/llvm
COPY handout/ /home/llvm/handout/

CMD ["./handout/run-tests.sh"]
