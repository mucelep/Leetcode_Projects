class Solution:
    def isValid(self, s: str) -> bool:
        p: dict[str, str] = {
            "(": ")",
            "{": "}",
            "[": "]"
        }
        stack: list[str] = []

        for char in s:
            if char in p:# tüm stringi gezip karakter açılışparantezi mi kontrolü
                stack.append(p[char])# açılış parantezi ise karşılıgını listeye atıyoruz
            else:
                # daha sonra kapanış parantezine denk gelince eşleşip eşleşmedigine bakıyoruz
                if not stack or stack.pop() != char:
                    return False
        return not stack


#return not stack stack dolu ise false döndürmesini sağlıyor not'ını alıyor
#islem bittiginde eleman kaldıysa false döndürüyor

# ({[ ]}) 
# )}] listeye attıgında
# 3. indeks else giriyor ] ile .pop() listenin son elemanına bakar