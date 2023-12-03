public static void main(String[] args) {
BigDecimal x = new BigDecimal(151);
BigDecimal y = new BigDecimal(41);
BigDecimal a = new BigDecimal(1);
BigDecimal b = new BigDecimal(1);

int n = 151;
int m = 41;

for (int i = n; i > n-m; i--) {
     a = a.multiply(x);
     x = x.subtract(new BigDecimal(1));
}

for (int j = m; j >= 2; j--) {
     b = b.multiply(y);
     y = y.subtract(new BigDecimal(1));
}

System.out.println(a.divide(b));
}
