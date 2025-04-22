fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (a, b, c) = readLine()!!.split(" ").map { it.toInt() }

        val digits = "0123456789"
        val upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        val lower = "abcdefghijklmnopqrstuvwxyz"

        val maxLen = maxOf(a, b, c)
        val password = StringBuilder()

        for (i in 0 until maxLen) {
            if (i < a) password.append(digits[i % digits.length])
            if (i < b) password.append(upper[i % upper.length])
            if (i < c) password.append(lower[i % lower.length])
        }

        println(password.toString())
    }
}
