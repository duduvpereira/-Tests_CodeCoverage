Ao executar o make ele irá rodar uma bateria de testes com a ferramenta Unity e logo após irá compilar e executar o programa normalmente, rodar o CPPcheck, o GCov, Valgrind e AddressSanitizer com parâmetros fixos.

Para executar o Valgrind ou AddressSanitizer com parâmetros específicos, basta executar os comandos:
make valgrind m=<método> s=<tamanho> t=<tipo>
make addressSanitizer m=<método> s=<tamanho> t=<tipo>

O make clean irá remover as seguintes extensões de arquivos:
*.o, app, *.cov, *.gcno,  *.gcda





Travis Identifier [![License][license-img]][license-url]
=
Simple Travis example for C using GCC compiler based on the identifier program presented by Delamaro et al. "Introdução ao Teste de Software". Elsevier. 2007.

Test results:

[<img alt="Build Status" src="https://travis-ci.org/duduvpereira/Tests_CodeCoverage.svg?branch=main" height="40">][travis-url]

Important files:

* [main.c](main.c)
* [Makefile](Makefile)
* [.travis.yml](.travis.yml)


Author
------
[**EduardoPereira**](https://github.com/duduvpereira)


License
-------
MIT License. See [LICENSE](LICENSE) for details.

[main-url]: https://github.com/duduvpereira/Tests_CodeCoverage
[readme-url]: https://github.com/duduvpereira/Tests_CodeCoverage/blob/main/README.md
[license-url]: https://github.com/duduvpereira/Tests_CodeCoverage/blob/main/LICENSE
[license-img]: https://img.shields.io/github/license/rsp/travis-hello-modern-cpp.svg
[travis-url]: https://travis-ci.org/duduvpereira/Tests_CodeCoverage
[travis-img]: https://travis-ci.org/duduvpereira/Tests_CodeCoverage.svg?branch=master
[github-follow-url]: https://github.com/duduvpereira
