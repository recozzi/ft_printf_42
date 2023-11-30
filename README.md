<h1>ft_printf</h1>
<h2>Overview</h2>
The 42 school's ft_printf project is a C programming exercise where students are tasked with implementing a custom printf function. They must handle a variety of format specifiers and modifiers, replicating the behavior of the standard printf() function in the C library. The goal is to develop a deep understanding of string manipulation and formatting specifications.
<h2>How To Use</h2>
<ol>
  <li>Clone the repository:</li>
  <pre><code>git clone https://github.com/recozzi/ft_printf_42.git</code></pre>
  <li>Move to the project's directory:</li>
  <pre><code>cd ft_printf</code></pre>
  <li>Run the Makefile to compile the library. This will create a `libftprintf.a` library file.</li>
  <pre><code>make</code></pre>
  <li>Now you are ready to use this library:</li>
  <pre><code>gcc main.c libftprintf.a -o output</code></pre>
</ol>
<h3>Features</h3>
<p>The ft_printf() function supports the following conversions:</p>
<ul>
  <li><code>%c</code> : Prints a single character.</li>
  <li><code>%s</code> : Prints a string.</li>
  <li><code>%p</code> : Prints the void * pointer argument in hexadecimal format.</li>
  <li><code>%d</code> : Prints a decimal (base 10) number.</li>
  <li><code>%i</code> : Prints an integer in base 10.</li>
  <li><code>%u</code> : Prints an unsigned decimal (base 10) number.</li>
  <li><code>%x</code> : Prints a number in hexadecimal (base 16) lowercase format.</li>
  <li><code>%X</code> : Prints a number in hexadecimal (base 16) uppercase format.</li>
  <li><code>%%</code> : Prints a percent sign.</li>
</ul>
<h2>Info</h2>
For more information about this project, please read the subject file <a href="https://github.com/recozzi/ft_printf_42/blob/main/en.subject.pdf">here</a>.
<h2>License</h2>
See <a href="https://github.com/recozzi/ft_printf_42/blob/main/LICENSE">License</a>.
