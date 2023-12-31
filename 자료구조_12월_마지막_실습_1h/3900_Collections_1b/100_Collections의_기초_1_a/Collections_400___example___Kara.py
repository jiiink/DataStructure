#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2020-05-02
#-------------------------------------------------------------------------------



text="""
Alexey Fyodorovitch Karamazov was the third son of Fyodor Pavlovitch
Karamazov, a land owner well known in our district in his own day, and
still remembered among us owing to his gloomy and tragic death, which
happened thirteen years ago, and which I shall describe in its proper
place. For the present I will only say that this “landowner”?for so we
used to call him, although he hardly spent a day of his life on his own
estate?was a strange type, yet one pretty frequently to be met with, a
type abject and vicious and at the same time senseless. But he was one of
those senseless persons who are very well capable of looking after their
worldly affairs, and, apparently, after nothing else. Fyodor Pavlovitch,
for instance, began with next to nothing; his estate was of the smallest;
he ran to dine at other men’s tables, and fastened on them as a toady, yet
at his death it appeared that he had a hundred thousand roubles in hard
cash. At the same time, he was all his life one of the most senseless,
fantastical fellows in the whole district. I repeat, it was not
stupidity?the majority of these fantastical fellows are shrewd and
intelligent enough?but just senselessness, and a peculiar national form of
it.

He was married twice, and had three sons, the eldest, Dmitri, by his first
wife, and two, Ivan and Alexey, by his second. Fyodor Pavlovitch’s first
wife, Adelaida Ivanovna, belonged to a fairly rich and distinguished noble
family, also landowners in our district, the Miusovs. How it came to pass
that an heiress, who was also a beauty, and moreover one of those
vigorous, intelligent girls, so common in this generation, but sometimes
also to be found in the last, could have married such a worthless, puny
weakling, as we all called him, I won’t attempt to explain. I knew a young
lady of the last “romantic” generation who after some years of an
enigmatic passion for a gentleman, whom she might quite easily have
married at any moment, invented insuperable obstacles to their union, and
ended by throwing herself one stormy night into a rather deep and rapid
river from a high bank, almost a precipice, and so perished, entirely to
satisfy her own caprice, and to be like Shakespeare’s Ophelia. Indeed, if
this precipice, a chosen and favorite spot of hers, had been less
picturesque, if there had been a prosaic flat bank in its place, most
likely the suicide would never have taken place. This is a fact, and
probably there have been not a few similar instances in the last two or
three generations. Adelaida Ivanovna Miusov’s action was similarly, no
doubt, an echo of other people’s ideas, and was due to the irritation
caused by lack of mental freedom. She wanted, perhaps, to show her
feminine independence, to override class distinctions and the despotism of
her family. And a pliable imagination persuaded her, we must suppose, for
a brief moment, that Fyodor Pavlovitch, in spite of his parasitic
position, was one of the bold and ironical spirits of that progressive
epoch, though he was, in fact, an ill-natured buffoon and nothing more.
What gave the marriage piquancy was that it was preceded by an elopement,
and this greatly captivated Adelaida Ivanovna’s fancy. Fyodor Pavlovitch’s
position at the time made him specially eager for any such enterprise, for
he was passionately anxious to make a career in one way or another. To
attach himself to a good family and obtain a dowry was an alluring
prospect. As for mutual love it did not exist apparently, either in the
bride or in him, in spite of Adelaida Ivanovna’s beauty. This was,
perhaps, a unique case of the kind in the life of Fyodor Pavlovitch, who
was always of a voluptuous temper, and ready to run after any petticoat on
the slightest encouragement. She seems to have been the only woman who
made no particular appeal to his senses.
"""

from collections import OrderedDict
from collections import Counter
import collections

lt = text.split()   # 대소문자 구별하지 않음.
lt = [ w.lower() for w in lt ]
mydic = collections.Counter(lt)

# 내림차순으로 정렬 reverse=True
odic  = OrderedDict(sorted(mydic.items(), key=lambda t:t[1], reverse=True))


for w in odic.keys() :
    if odic[w] >= 4 :
        print( f' {w:13}: {odic[w]:2} 번 나타남')